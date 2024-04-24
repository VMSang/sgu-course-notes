/*
	username: Minh Sang
*/
#include <bits/stdc++.h>
//======================================
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define sz size
#define mp make_pair
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define vdb vector<double>
using namespace std;
//======================================
void nhap(int *&a, int *&b, int &n, int &m){
	cout<<"nhap vao so luong phan tu n = "; cin>>n;
	cout<<"nhap vao so luong phan tu m = "; cin>>m;

	a = new int[n];
	b = new int[m]; 
	for(int i=0; i<n; i++){
		cin>>*(a+i);
	}
	for(int i=0; i<m; i++){
		cin>>*(b+i);
	}
}
void xuat(int *a, int *b, int n){
	for(int i=0; i<n; i++){
		cout<<*(a+i);
	}
	for(int i=0; i<n; i++){
		cout<<*(b+i);
	}
}
int *noimang(int *a, int *b, int n, int m){
	int *c = new int[n+m];
	//sao chep mang a --> c
	for(int i=0; i<n; i++){
		c[i] = a[i];
	}
	for(int i=0; i<m; i++){
		c[n+i] = b[i];
	}
	for(int i=0; i<n+m; i++){
		cout<<c[i]<<' ';
	}
	return c;
}

void sort(int *&a, int *&b, int n, int m){
	
}

int main(){ 
	int *a, *b, n, m;
	nhap(a, b, n, m);
	int *c = noimang(a, b, n, m);
	delete []a;
	delete []b;
	delete []c;
	return 0;
}