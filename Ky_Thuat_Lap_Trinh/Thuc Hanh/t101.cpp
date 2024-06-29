#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int prime[10000001];
vector<int> v;

void sang(){
	for(int i=0; i<1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i=2; i<=sqrt(1000000); i++){
		if(prime[i]){
			for(int j=i*i; j<1000000; j+=i){
				prime[j] = 0;
			}
		}
	}
	for (int i=0; i<1000000; i++){
		if(prime[i]){
			v.push_back(i);
		}
	}
}

int main() {    
	sang();
	for(auto x : v){
		cout<<x<<" ";
	}
	int dem = 0;
	for(int i=0; i<1000000; i++){
		if(prime[i]){
			dem ++;
		}
	}
	cout<<"tu 1 den 1 ti co: "<<dem<<" so nguyen to"<<endl;
	dem = 0;
	int avr;

	cout<<"snt doi xung"<<dem;

    return 0;
}