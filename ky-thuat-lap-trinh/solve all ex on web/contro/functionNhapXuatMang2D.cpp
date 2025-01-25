#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void nhapMang(int **&a, int &n, int &m){
	cin>>n>>m;
	a = new int*[n];
	for(int k=0; k<n; k++){
		a[n] = new int[m];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
}

void xuatMang(int **a, int n, int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main() {    
	int **a, n, m;
	nhapMang(a,n,m);
	xuatMang(a,n,m);
	for(int i=0; i<n; i++){
		delete[] a[i]; 
	}
	delete[] a;
    return 0;
}