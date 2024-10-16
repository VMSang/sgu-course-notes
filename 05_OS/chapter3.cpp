#include <bits/stdc++.h>
using namespace std;

int fr, n, *a;
// in ra bang luon

void FIFO() {
	vector<int> tmp[fr];
	// -1 -1 5
	for (int i = 1; i < fr; i++) {
		for (int j = 0; j < i; j++) {
			tmp[i].push_back(-1);
		}
		tmp[i].push_back(a[i]);
	}

	for (int i = 0; i < fr; i++) {
		for (auto &x : tmp[i]) {
			cout << x << " ";
		}
		cout << "\n";
	}
}

int main() {
	cin >> fr >> n;
	a = new int[fr];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	FIFO();

	return 0;
}