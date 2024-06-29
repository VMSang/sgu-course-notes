#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// lưu ý khởi tạo bằng 1 vì bản thân khi đếm lên là 2 số rồi
int main() {
	int n; cin>>n; 
 	vector<int> v(n);
 	for(int i=0; i<n; i++){
 		cin>>v[i];
 	}

 	int MAX = 1;
 	int MAXCURR = 1;

 	for(int i=0; i<n; i++){
 		if(v[i] <= v[i+1]){
 			MAXCURR++;
 			MAX= max(MAX, MAXCURR);
 		} else {
 			MAXCURR = 1;
 		}
 	}
 	cout<<MAX;
    return 0;
}