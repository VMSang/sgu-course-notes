#include <iostream>
#include <fstream>
using namespace std;

// struct sinhVien{
// 	char name[100];
// 	int mssv;
// };

// void nhap(sinhVien *sv, int n){
// 	for(int i=0; i<n; i++){
// 		// getline(cin, sv[i].name);
// 		cin.getline(sv[i].name, 100);
// 	}
// }
// int main(){
// 	int n; cin>>n; 
// 	cin.ignore();
// 	sinhVien *minhSang = new sinhVien[n];
// 	nhap(minhSang, n);
// 	return 0;
// }

struct sinhVien{
	string name;
};


int main(){
	int n; //so luong sinh vien
	sinhVien *sv = new int [n];
	for(int i=0; i<n; i++){
		getline(sv[i].name, cin)
	}
	return 0;
}