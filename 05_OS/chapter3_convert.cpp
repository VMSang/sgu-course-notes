#include <bits/stdc++.h>
using namespace std;

const int maxN = 100;
int adr, sz, n, pg[maxN], fr[maxN];

// logic to address
void logic_address(){
	int page = adr / sz; 
	int frame = fr[page];
	int cal = (frame * sz) + (adr % sz);
	cout<<cal<<"\n";
}

// address to logic
void address_logic(){
	int frame = adr / sz;
	int page = fr[frame];
	int cal = page * sz + (adr - frame * adr);
	cout<<cal;
}

int main() {
	cin>>adr>>sz>>n;
	for(int i = 0; i < n; i++) cin>>pg[i];
	for(int i = 0; i < n; i++) cin>>fr[i];

	logic_address();
	address_logic();

    return 0;
}