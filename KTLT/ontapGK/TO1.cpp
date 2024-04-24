/*
	username: Minh Sang
*/
#include <iostream>
#include <fstream>
using namespace std;
//======================================
void nhap(int *&a, int &n){
	ifstream myfile("input.txt");
	if(!myfile){
		cout<<"er";
		return;
	}
	myfile >> n;
	a = new int [n];
	for(int i=0; i<n; i++){
		myfile >> a[i];
	}
}

void maxV(int *a, int n, int &dem, int &maxValue){
	maxValue = INT_MIN;
	for(int i=0; i<n; i++){
		if (a[i] > maxValue){
			maxValue = a[i];
		}
	}
	for(int i=0; i<n; i++){
		if (a[i] == maxValue){
			dem++;
		}
	}
}
int main(){ 
	int *a, n;
	nhap(a, n);
	ofstream myfileout("output.txt");
	if (!myfileout){
		return -1;	
	}
	int dem = 0, maxValue;
	maxV(a, n, dem, maxValue);
	myfileout << maxValue <<" so luong "<< dem;
	return 0;
}