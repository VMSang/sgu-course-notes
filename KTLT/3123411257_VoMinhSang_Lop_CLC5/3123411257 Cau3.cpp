/*
	Họ và Tên: Võ Minh Sang
	MSSV: 3123411257
	Lớp: DCT123C5
	_CLC_
*/

#include <bits/stdc++.h>
using namespace std;

int MAX_L = 100000;
int storage[100000];
int len(char *p);
int compareTwoStrings(char *p1, char *p2);

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // nhập từ bàn phím
    char* s = new char[MAX_L];
    cin.getline(s, MAX_L);
    int k; cin>>k;
    char e; cin>>e;
//-----------------------------câu a----------------------------------

    /*tách chữ thành từ*/
    char** words = new char*[MAX_L]; // con trỏ quản lý các chữ
    int word_cnt = 0;

    int j = 0; // dùng để đếm số lượng từ
    char* word = nullptr; // khởi tạo con trỏ word
    int i; //giữ lại i khi ra khỏi for, duyệt từ cuối
    for (i = 0; s[i] != '\0'; i++) {
        // kết thúc 1 từ
        if (s[i] == ' ') {
            word = new char[j + 1];
            for (int k = 0; k < j; k++) {
                word[k] = s[i - j + k];
            }
            word[j] = '\0';
            words[word_cnt] = word; //gán chuỗi chứ kh gán địa chỉ
            word_cnt++;
            j = 0;
        } else {
            j++;
        }
    }

    // xử lý từ cuối cùng
    if (j > 0) {
        word = new char[j + 1];
        for (int k = 0; k < j; k++) {
            word[k] = s[i - j + k];
        }
        word[j] = '\0';
        words[word_cnt] = word;
        word_cnt++;
    }
     cout << "a) tach tu, chuoi co " << word_cnt << " tu\n";
//-----------------------------câu b----------------------------------
    // selection sort
    for(int i=0; i<word_cnt-1; i++){
        int min_pos = i;
        for(int j=i+1; j<word_cnt; j++){
            if(compareTwoStrings(words[min_pos], words[j]) > 0)
                min_pos = j;
        }
        swap(words[i], words[min_pos]);
        
    }
    cout<<"b) sau xap xep: ";
    for(int i=0; i<word_cnt; i++){
        cout<<words[i]<<" ";
    }
    cout<<endl;
//-----------------------------câu c----------------------------------
    cout<<"c) ";
    for(int i=0; i<word_cnt; i++){
        bool flag = false;
        int cnt = 0;
        for(int j=0; j<i; j++){
            if (compareTwoStrings(words[i], words[j]) == 0){
                flag = true;
                break;
            }
        }
        if (!flag){
            for(int k=0; k<word_cnt; k++){
                if(compareTwoStrings(words[i], words[k]) == 0){
                    cnt ++; 
                }
            }
            cout << words[i] << ": " << cnt <<", ";
            if(cnt <= k){
                storage[i] = 1;    
            }
        }
    }
    cout<<endl;

//-----------------------------câu d----------------------------------
    cout<<"d) Nhap k la "<<k<<". Cac tu co so lan xuat hien nho hon bang "<<k<<" la: ";
    for(int i=0; i<word_cnt; i++){
        if(storage[i] == 1){
            cout<<words[i]<<", ";
        }
    }
    cout<<endl;
//-----------------------------câu e----------------------------------
     for(int i=0; i<word_cnt; i++){
        int j = 0;
        for(int k=0; k<len(words[i]); k++){
            if(words[i][k] != e){
                words[i][j] = words[i][k];
                j++;
            }
        }
        words[i][j] = '\0';
    }
    cout<<"e) chuoi sau khi xoa: ";
    for(int i=0; i<word_cnt; i++){
        cout<<words[i]<<" ";
    }

//-----------------------------giải phóng vùng nhớ--------------------

    delete[] s;
    for (int i = 0; i < word_cnt; i++) {
        delete[] words[i];
    }
    delete[] words;

    return 0;
}

// --------------------------function----------------------------------
int len(char *p){
    int n = 0;
    while (p[n]!='\0'){
        n++;
    }
    return n;
}

int compareTwoStrings(char *p1, char *p2){
    int lenp1 = len(p1), lenp2 = len(p2), min_lenp;
    min_lenp = lenp1 < lenp2 ? lenp1 : lenp2;
    //khác ở đâu so sánh ở đó
    for(int i=0; i<min_lenp; i++){
        if (p1[i] != p2[i]){
            return p1[i] < p2[i] ? -1 : 1;
        }
    }
    //các kí tự giống nhau
    return lenp1 > lenp2 ? 1 : (lenp1 == lenp2 ? 0 : -1);
}