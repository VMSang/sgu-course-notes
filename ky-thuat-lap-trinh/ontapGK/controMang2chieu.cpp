#include <iostream>
#include <fstream>
using namespace std;

//con trỏ, mảng 2 chiều, cấp phát động
void nhap(int **&a, int &n, int &m){
	ifstream myFile("input.txt");
	if (!myFile){
		cout<<"khong mo duoc";
		return;
	}
	myFile >> n;
	myFile >> m;
	a = new int *[n];
	for(int i=0; i<n; i++){
		a[i] = new int [m];
	}

	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			myFile >> a[i][j];
		}
	}
	myFile.close();
}

void xuat(int **a, int n, int m){
	ofstream myFile("output.txt");
	if (!myFile){
		cout<<"khong mo duoc";
		return;
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			myFile << a[i][j];
		}
	}
}
int main(){
	int **a, n, m;
	nhap(a, n, m);

	return 0;
}