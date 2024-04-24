#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	string wordsInput[n];
	for(int i=0; i<n; i++){
		cin>>wordsInput[i];
	}
	int countWord[7] = {0};

	for (string x : wordsInput){
		int cnt = x.length();
		countWord[cnt-1]++;
	}

	//vi tri nao xuat hien nhieu nhat
	int MaxIndex = 0;
	for (int i=0; i<7; i++){
		if (countWord[i] > countWord[MaxIndex]){
			MaxIndex = i;
		}
	}

	cout<<MaxIndex+1<<' '<<countWord[MaxIndex];
	return 0;
}