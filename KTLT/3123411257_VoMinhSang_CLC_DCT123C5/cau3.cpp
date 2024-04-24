/*
	Họ và Tên: Võ Minh Sang
	MSSV: 3123411257
	Lớp: DCT123C5
	_CLC_
*/

#include <bits/stdc++.h>
using namespace std;

int MAX_L = 100000;
int main(){
	// nhập từ bàn phím
	char *s = new char[MAX_L];
	cin.getline(s, MAX_L);

	/*tách chữ thành từ*/
	char **words = new char*[MAX_L]; //con trỏ quản lý các chữ
	char *word = new char[MAX_L]; //con trỏ lưu tạm chữ được tách và đếm số lượng chữ cái, sau đó gán cho words quản lý
	int word_cnt = 0; //không khởi tạo = 1 vì tránh trường hợp nhập vào chỉ một khoảng trắng hoạc chuỗi rỗng
	int j = 0; //dùng làm chỉ số cho word
	for(int i=0; s[i] != '\0'; i++){
		//kết thúc 1 từ
		if(s[j] == ' '){
			word[j] = '\0';
			words[word_cnt] = new char[j+1];
			strcpy(words[word_cnt], word); // copy word sang words để quản lý
			cout<<word<<endl;
			word_cnt++; //đếm được 1 từ mới
			cout<<"dem = "<<word_cnt<<endl;
			j = 0;
		}
		else {
		//thêm các chữ cái vào word
			word[j] = s[i];
			j++;
		}
	}
	//copy từ cuối vì từ cuối kết thúc = '\0' nên không qua được if (s[j] == ' ') nên từ cuối chỉ mới lưu trong work
	word[j] = '\0';
	words[word_cnt] = new char[j+1];
	strcpy(words[word_cnt], word);
	word_cnt++;
	cout<<"tach tu, chuoi co "<<word_cnt<<" tu\n";


	delete[] s;
    delete[] word;
    for (int i = 0; i < word_cnt; i++) {
        delete[] words[i];
    }
    delete[] words;
	return 0;
}

/* strcp via https://www.geeksforgeeks.org/cpp-strcpy/ */