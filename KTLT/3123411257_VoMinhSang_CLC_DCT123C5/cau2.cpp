/*
	Họ và Tên: Võ Minh Sang
	MSSV: 3123411257
	Lớp: DCT123C5
	_CLC_
*/

#include <bits/stdc++.h>
using namespace std;

/* Prime   via https://vnoi.info/wiki/algo/algebra/primality_check.md */
bool isPrime(int n){
	if (n == 2 || n == 3) return true;
	if (n < 3 || n%2 == 0 || n%3 == 0) return false;
	for(int i=5; i*i <=n; i+=6){
		if (n%i == 0 || n%(i+2) == 0) return false;
	}
	return true;
}

int caud(int Min){
	for(int i=Min - 1; i>=2; i--){
		if(isPrime(i)){
			return i;
		}
	}
	return -1;
}
int main(){
	//đọc ghi dữ liệu từ file
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	//số lượng phần tử
	int n; cin>>n;
	int *a = new int[n];
//câu a
	int Min = INT_MAX;
	float cnt = 0, avr = 0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if (isPrime(a[i])){
			cnt++;
			avr+=a[i]*1.0;
		}
	}
//câu b
	if (cnt == 0)
		cout<<"b) "<<-1<<endl;
	else
		cout<<"b) "<<avr/cnt<<endl;

//câu c
	cout<<"c) ";
	int m = 0;
	int *b = new int[m];
	for(int i=0; i < n; i++){
		if (!isPrime(a[i])){
			b[m] = a[i];
			Min = min(Min, b[m]);
			m++;
		}
	}
	for(int i=0; i<m; i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
//câu d
	cout<<"d) "<<caud(Min);

	delete [] a;
	delete [] b;
	
	return 0;
}