/*
input:
1
1240
1
4
0 1 2 3
3 2 6 4
output: 2264

input:
0
6578
1
6
0 1 2 3 4 5
6 4 5 7 1 9
*/

#include <bits/stdc++.h>
using namespace std;

int adr, sz, n, *pg, *fr;
map<int, int > mp;

// logic to physical
void logic_physical() {
	int page = adr / sz;
	if (page < 0 || page > n) {
		cout << "Dia Chi Khong Hop Le";
		return;
	}
	// dia chi hop le
	int frame = fr[page];
	cout << "chuyen sang dia chi vat ly la: " << (frame * sz) + (adr % sz) << "\n";
}

// address to logic
void physical_logic() {
	int frame = adr / sz;
	int page = mp[frame];
	cout << "chuyen sang dia chi logic la: " << (page * sz) + (adr - (frame * sz));
}

int main() {
	// type == 1 <=> logic_physical
	int type; cin >> type;

	// địa chỉ ban đầu, kích thước mỗi trang (KB), số lượng frame
	cin >> adr >> sz >> n;
	sz *= 1024;

	if (type) {
		// logic_physical
		pg = new int[n];
		fr = new int[n];
		for (int i = 0; i < n; i++) cin >> pg[i];
		for (int i = 0; i < n; i++) cin >> fr[i];
		logic_physical();

	}
	else {
		// physical_logic
		for (int i = 0; i < n; i++) {
			int tmp; cin >> tmp;
		}
		for (int i = 0; i < n; i++){
			int tmp; cin>>tmp;
			mp[tmp] = i;
		} 
		physical_logic();
	}

	return 0;
}