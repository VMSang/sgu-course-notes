/*
	Họ và Tên: Võ Minh Sang
	MSSV: 3123411257
	Lớp: DCT123C5
	_CLC_
*/

#include <bits/stdc++.h>
using namespace std;

/* Prime | via https://vnoi.info/wiki/algo/algebra/primality_check.md */
bool isPrime(int n);

int main(){
	//nhập m dòng và n cột
	int m, n;
	cout<<"Hay nhap so dong va so cot: ";
	cin>>m>>n;
//-----------------------------câu a----------------------------------
	int **array2D = new int*[m];
	for(int i=0; i<m; i++){
		array2D[i] = new int [n];
	}
//-----------------------------câu b----------------------------------
	//nhập mảng và tìm lớn nhất
	int MaxOfArray = INT_MIN;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>array2D[i][j];
			MaxOfArray = max(MaxOfArray, array2D[i][j]);
		}
	}

	cout<<"a) Xuat mang\n";
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<array2D[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"b) Gia tri lon nhat cua mang: "<<MaxOfArray<<"\n";
//-----------------------------câu c----------------------------------

	cout<<"c) gia tri nho nhat moi cot "<<"\n";
	for(int i=0; i<n; i++){
		int MinOfCol = INT_MAX;
		for(int j=0; j<m; j++){
			MinOfCol = min(MinOfCol, array2D[j][i]);
		}
		cout<<"nho nhat cot "<<i<<" = "<<MinOfCol<<"\n";
	}
//-----------------------------câu d----------------------------------

	cout<<"d) Tong cac so nguyen to tren moi dong "<<"\n";
	for(int i=0; i<m; i++){
		int sum = 0;
		for(int j=0; j<n; j++){
			if(isPrime(array2D[i][j])){
				sum+=array2D[i][j];
			}
		}
		cout<<"Tong dong "<<i<<" = "<<sum<<"\n";
	}

	for(int i=0; i<n; i++){
		delete[] array2D[i];
	}
	delete[] array2D;
	return 0;
}

bool isPrime(int n){
	if(n==2 || n==3) return true;
	if(n<3 || n%2 == 0 || n%3 == 0) return false;
	for(int i=5; i*i <= n; i+=6){
		if(n%i == 0 || n%(i+2) == 0) return false;
	}
	return true;
}
