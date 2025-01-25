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

int main(){
	// 5x3
	int **prtToArrPtr = new int*[3];
	for(int i=0; i<3; i++){
		prtToArrPtr[i] = new int[2];
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cin>>prtToArrPtr[i][j];
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cout<<prtToArrPtr[i][j]<<' ';
		}
		cout<<endl;
	}
	for(int i=0; i<3; i++){
		delete [] prtToArrPtr[i];
	}
	delete [] prtToArrPtr;
	return 0;
}