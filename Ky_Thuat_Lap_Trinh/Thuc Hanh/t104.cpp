#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int n; cin>>n;
 	vector<int> a(n);
 	for(int i=0; i<n; i++){
 		cin>>a[i];
 	}   
 	int MAXsum = 0;
 	for(int i=0; i<n; i++){
 		int sum = 0;
 		for(int j=i; j<n; j++){
 			sum+=a[j];
            MAXsum = max(MAXsum, sum);
 		}
 	}

 	cout<<MAXsum;
    return 0;
}