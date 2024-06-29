#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
	int n; cin>>n;
 	vector<int> arr(n);
 	for(int i=0; i<n; i++){
 		cin>>arr[i];
 	}
 	int cnt = 0;
 	for(int i=0; i<n-2; i++){
 		for(int j=i+1; j<n-1; j++){
 			for(int k=j+1; k<n; k++){
 				if(arr[i] + arr[j] + arr[k] == 0){
 					cnt ++;
 				}
 			}
 		}
 	}
 	cout<<cnt;
    return 0;
}