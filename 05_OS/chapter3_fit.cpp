/*
input
6 6
115 500 358 200 375 320
300 600 350 200 750 125

input
4 4
255 435 215 452
480 450 250 300
*/
#include <bits/stdc++.h>
using namespace std;

const int maxN = 100;
int n, m, mem[maxN], p[maxN];

void first_fit() {
	vector<int> dsk[maxN];
	int tmp[m];
	copy(mem, mem + m, tmp);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (tmp[j] >= p[i]) {
				tmp[j] -= p[i];
				dsk[j].push_back(p[i]);
				break;
			}
		}
		// cout<<p[i]<<" ";
	}

	// print
	cout << "first-fit" << "\n";
	for (int i = 0; i < m; i++) {
		cout << mem[i] << ": ";
		for (auto &x : dsk[i]) {
			cout << x << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}

void best_fit() {
	vector<int> dsk[maxN]; // print
	int tmp[m];
	copy(mem, mem + m, tmp);

	for (int i = 0; i < n; i++) {
		int MIN = INT_MAX;
		int idx = -1; // if not find
		int value = -1;
		for (int j = 0; j < m; j++) {
			if (tmp[j] >= p[i] && tmp[j] <= MIN) {
				MIN = tmp[j];
				idx = j;
				value = p[i];
			}
		}
		if (idx != -1) {
			dsk[idx].push_back(value);
			tmp[idx] -= p[i];
		}
	}

	// print
	cout << "best-fit" << "\n";
	for (int i = 0; i < m; i++) {
		cout << mem[i] << ": ";
		for (auto &x : dsk[i]) {
			cout << x << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}

void worst_fit() {
	vector<int> dsk[maxN]; // print
	int tmp[m];
	copy(mem, mem + m, tmp);

	for (int i = 0; i < n; i++) {
		int MAX = INT_MIN;
		int idx = -1; // if not find
		int value = -1;
		for (int j = 0; j < m; j++) {
			if (tmp[j] >= p[i] && tmp[j] >= MAX) {
				MAX = tmp[j];
				idx = j;
				value = p[i];
			}
		}
		if (idx != -1) {
			dsk[idx].push_back(value);
			tmp[idx] -= p[i];
		}
	}

	// print
	cout << "worst-fit" << "\n";
	for (int i = 0; i < m; i++) {
		cout << mem[i] << ": ";
		for (auto &x : dsk[i]) {
			cout << x << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}

void next_fit() {
	vector<int> dsk[maxN];
	int tmp[m];
	copy(mem, mem + m, tmp);

	int j = 0;
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (; j <= m; j++) {
			if (tmp[j] >= p[i]) {
				tmp[j] -= p[i];
				dsk[j].push_back(p[i]);
				j++;
				if (j >= m) {
					j = 0;
				}
				break;
			}
			else {
				cnt++;
			}

			if(cnt == m) {
				// cout<<"khong duoc chap nhan: "<<p[i]<<"\n";
				break;
			}
			// vong nguoc lai
			if (j == m) {
				j = 0;
			}
		}
	}

	// print
	cout << "next-fit" << "\n";
	for (int i = 0; i < m; i++) {
		cout << mem[i] << ": ";
		for (auto &x : dsk[i]) {
			cout << x << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}

void last_fit() {
	vector<int> dsk[maxN];
	int tmp[m];
	copy(mem, mem + m, tmp);

	for (int i = 0; i < n; i++) {
		int value = -1;
		for (int j = 0; j < m; j++) {
			if (tmp[j] >= p[i]) {
				value = j;
				cout<<tmp[j]<<" "; 
			}
		}
		cout<<"\n";
		if(value != -1){
			// cout<<"check  ";
			tmp[value] -= p[i];
			dsk[value].push_back(p[i]);
		}
		// else {
		// 	cout<<"khong duoc chap nhan: "<<p[i]<<"\n";
		// }
	}

	// print
	cout << "last-fit" << "\n";
	for (int i = 0; i < m; i++) {
		cout << mem[i] << ": ";
		for (auto &x : dsk[i]) {
			cout << x << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}
int main() {
	// so tien trinh, so phan vung nho
	cin >> n >> m;
	// cac tien trinh
	for (int i = 0; i < n; i++) cin >> p[i];
	// cac vung nho
	for (int i = 0; i < m; i++) cin >> mem[i];

	cout << "------------------------------" << "\n";
	first_fit();
	best_fit();
	worst_fit();
	next_fit();
	last_fit();

	return 0;
}