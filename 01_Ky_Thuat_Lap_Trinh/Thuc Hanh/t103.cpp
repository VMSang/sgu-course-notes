#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

int main() {
   int n; cin>>n;

   vector<int> a(n);
   for(int i=0; i<n; i++){
   		cin>>a[i];
   }

   int MAX = 0;
   
   for(int i=0; i<n; i++){
   		int sum = 0;
   		for(int j=i; j<n; j++){
   			sum += a[j];
   			if(sum == 0){
   				MAX = max(MAX, j-i+1);
   			}
   		}
   }
   cout<<MAX;
   return 0;
}
