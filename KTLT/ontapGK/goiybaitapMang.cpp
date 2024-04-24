#include <iostream>
#include <fstream>
using namespace std;
void read(int *&a, int &n){
	ifstream myfile("input.txt");
	if (!myfile){
		cout<<"error";
		return;
	}
	myfile >> n;
	a = new int[n];
	for(int i=0; i<n; i++){
		myfile >> a[i];
	}
	myfile.close();
}

long long tong(int *a, int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		sum += a[i];
	}
	return sum;
}
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a%b);
}

long long fgcd(int *a, int n){
	int dem = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if (gcd(a[i], a[j]) == 1)
				dem++;
		}
	}
	return dem;
}
void nhatnhi(int *a, int &max1, int &max2, int n){
	max1 = INT_MIN;
	max2 = INT_MIN;
	for(int i=0; i<n; i++){
		if(a[i] > max1){
			max2 = max1;
			max1 = a[i];
		}
		//truong hop vong lap tren khong xay ra lan nao, do index 0 = max1
		if(a[i]<max1 && a[i]>max2)
			max2 = a[i];
	}
}

int daycon(int *a, int n){
	int maxL = 1;
	int CurrL = 1;
	for(int i=0; i<n; i++){
		if (a[i] <= a[i+1]){
			CurrL++;
		}
		else{
			maxL = max(maxL, CurrL);
			CurrL = 1;
		}
	}
	return maxL;
}

void insersionSort(int *a, int n){
	for(int i=0; i<n; i++){
		int value = a[i], pos = i - 1;
		while (pos >= 0 && value < a[pos]){
			a[pos + 1] = a[pos - 1];
			pos--;
		}
		a[pos + 1] = value;
	}
}

int main() {
	int *a, n;
	read(a,n);
	int max1, max2;
	nhatnhi(a, max1, max2, n);
	ofstream filecuaSang("output.txt");
	filecuaSang << daycon(a, n);	
	return 0;
}