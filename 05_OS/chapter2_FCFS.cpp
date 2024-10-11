/*
input:
- so luong tien trinh n
- n so AT (arrival time)
- n so ST (service time)

output:
- thoi gian cho trung binh
*/

#include <bits/stdc++.h>
using namespace std;

int n, WT = 0, AT[100], ST[100];

void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> AT[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> ST[i];
	}
}

int FCFS() {
	int time = 0;
	for(int i = 0; i<n; i++){
		WT += time - AT[i];
		time += ST[i];
	}
	return WT;
}

void PRINT(){
	cout<<"AWT = "<<WT/n;
}

int main() {
	input();
	FCFS();
	PRINT();
	return 0;
}