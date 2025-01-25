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
void nhap(int *&a, int &n){
	cin>>n;
	a = new int[n];
	for(int i=0; i<n; i++){
		cin>>*(a+i);
	}
}

void xuat(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<*(a+i)<<' ';
	}
	cout<<endl;
}

void xoak(int *&a, int n){
	int k; 
	cout<<"nhap vao vi tri can xoa, neu khong xoa thi nhap -1: ";
	cin>>k;
	if (k == -1)
		return;
	int *temp = new int[n-1];
	//copy tu 0 den <k
	for(int i=0; i<k; i++){
		temp[i] = a[i];
	}
	for(int i=k; i<n-1; i++){
		temp[i] = a[i+1];
	}
	delete [] a;
	a = temp;
	for(int i=0; i<n-1; i++){
		cout<<a[i];
	}
}

void themj(int *&a, int n){
	int x, j;
	cout<<"nhap vao x = "; cin>>x;
	cout<<"nhap vao j = "; cin>>j;
	int *temp = a;
	temp = new int[n+1];
	//sao chep gia tri cua mang a: tu dau den j
	for(int i=0; i<j; i++){
		temp[i] = a[i];
	}
	temp[j] = x;
	//sao chep a vao tmp: tu j+1 den n+1
	for(int i=j+1; i<n+1; i++){
		temp[i] = a[i-1];
	}
	for(int i=0; i<n+1; i++){
		cout<<temp[i]<<' '; 
	}
	delete[] a;
	a = temp;
}
int main(){
	int *a, n;
	nhap(a, n);
	// xuat(a, n);
	xoak(a, n);
	delete [] a;
	return 0;
}
