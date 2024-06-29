#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void nhapMang(int *a, int &n){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
}

void xuatMang(int a, int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}

void lonNhatNhi(int *a, int n, int &nhat, int &nhi){
	int MAX = INT_MIN;
	for(int i=0; i<n; i++){

	}
}
int main() { 
	int *a;
	nhapMang();
	xuatMang();

	delete a;   
    return 0;
}




// struct ten{
// 	int tu;
// 	int mau;
// };

// ten a;
// ten *b = &a;
// *b.tu= 1;
// b->tu=1;



struct node
{
	float x;
	node *next;
};

void in(node *head){
	while(head->NULL){
		cout<<head->x;
		head = head->next;
	}
}