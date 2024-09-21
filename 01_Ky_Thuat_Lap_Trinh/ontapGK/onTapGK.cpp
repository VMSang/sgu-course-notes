/*
	username: Minh Sang
*/
#include <bits/stdc++.h>
//======================================
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define sz size
#define mp make_pair
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define vdb vector<double>
using namespace std;
//======================================
/*int *const ptr_a = &a; kh thể đổi nơi trỏ đến, đổi được giá trị thông qua nó
const int *ptr_a = &a; ngược lại
*/

/*vector:
vector<int> arr = {1,2,3}
arr.at(2) == arr[2] == gia tri 3

arr.front(); // được phần tử đầu là 1
arr.back(); // được phần tử cuối là 3

arr.push_back(4); // Mảng sau khi thêm là {1, 2, 3, 4}

arr.pop_back(4);
// Mảng sau khi loại bỏ phần tử cuối là {1, 2, 3}

arr.pop_back(); // lấy đi phần tử cuối
arr.size(); // được 2 vì vector đang chứa 2 phần tử
arr.capacity(); // vẫn được 3 vì vector này từng chứa nhiều nhất 3 phần tử

arr.resize(1);
arr.size(); // được 1 vì vector đã được resize về 1

arr.clear();
arr.size(); // được 0 vì đã xoá hết phần tử của vector
*/
vi readArrfromFile(const string pash){
	ifstream inputFile(pash);
	if(!inputFile){
		cout<<"unable to open file";
		return {};
	}
	vi a;
	int n; inputFile >> n;
	for(int i=0; i<n; i++){
		inputFile >> a[i];
	}
	inputFile.close();
	return a;
}

void writeArrayFromFile(const string pash,int max, int dem){
	ofstream outputFile(pash);
	if(!outputFile){
		cout<<"unable to open file";
		return;
	}
	outputFile <<"max = "<< max <<' ';
	outputFile <<"dem = "<<dem;
	outputFile.close();
}

int main(){ 
	fast
	const string pashin = "input.txt";
	const string pashout = "output.txt";
	vi a = readArrfromFile(pashin);
	if (a.empty()){
        cout << "Error reading file.";
        return 1;
    }
	int max = a.at(0);
	int dem = 0;
	for(int i=1; i<a.size(); i++){
		if(a[i] >= max){
			max = a[i];
		}
		else
			continue;
		if (a[i] == max)
			dem++;
	}
	writeArrayFromFile(pashout, max, dem);
	return 0;
}