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

bool checkIndex(int i, int j, int n, int m){ //i,j: vi tri dang xet, n,m: kich thuoc mang a
	if( i<0 || i >=n || j<0 || j>=n ){
		return false;
	}
	return true;
}

void createArrayE(int **&e, int **a, int n, int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			int dem = 0;
			if(checkIndex(i-1, j-1, n, m) && (a[i-1][j-1]) % 2 == 0)
				dem ++;
			if(checkIndex(i-1, j, n, m) && (a[i-1][j-1]) % 2 == 0)
				dem ++;
			if(checkIndex(i-1, j+1, n, m) && (a[i-1][j-1]) % 2 == 0)
				dem ++;
			if(checkIndex(i, j-1, n, m) && (a[i-1][j-1]) % 2 == 0)
				dem ++;
			if(checkIndex(i, j+1, n, m) && (a[i-1][j-1]) % 2 == 0)
				dem ++;
			if(checkIndex(i+1, j-1, n, m) && (a[i-1][j-1]) % 2 == 0)
				dem ++;
			if(checkIndex(i+1, j, n, m) && (a[i-1][j-1]) % 2 == 0)
				dem ++;
			if(checkIndex(i-1, j+1, n, m) && (a[i-1][j-1]) % 2 == 0)
				dem ++;
			e[i][j] = dem;
		}
	}
}

void doc(const string pash, int **a, int **e, int &n, int &m){
	ifstream inputFile = pash;
	if(!inputFile){
		cout<<"unable to open file input";
		return;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			inputFile>>a[i][j];
		}
	}
	inputFile.close();
}

void ghi(const string pash, int **e, int n, int m){
	ofstream outputFile(pash);
	if(!outputFile){
		cout<<"unable to open file output";
		return;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			outputFile << e[i][j] << ' ';			
		}
	}
	outputFile.close();

}
int main(){ 
	const string input = "input.txt";
	const string output = "output.txt";
	ifstream inputFile
	int n;
	inputFile>>n; 
	int m;
	inputFile>>m; 
	int **a=new int*[n];
	for(int i=0; i<m; i++){
		a[i]=new int[m];
	}
		
	int **e=new int*[n];
	for(int i=0; i<m; i++){
		e[i]=new int[m];
	}
	doc(input, a, e, n, m);
	createArrayE(e, a, n, m);
	ghi(output ,e, n, m);

	return 0;
}