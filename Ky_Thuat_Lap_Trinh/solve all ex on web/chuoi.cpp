#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {    
	freopen("input.txt", "r", stdin);    
	freopen("output.txt", "w", stdout);    
	int dem = 0;
	for(int i=0; i<INT_MAX; i++){
		char str;
		cin>>str;
		if(str == "\n")
			dem ++;
		int strtmp;
		cin>>strtmp;
		if(strtmp < 0 || strtmp > 255)
			break;
	}
	cout<<dem;
    return 0;
}
