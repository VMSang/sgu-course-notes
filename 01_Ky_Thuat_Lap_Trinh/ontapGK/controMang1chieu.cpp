#include <iostream>
#include <fstream>
using namespace std;

//hàm nhập mảng 1 chiều, dùng con trỏ, cấp phát động
//lưu ý: hàm nhập phải truyền tham chiếu, tức có dấu &
void nhap(int *&a, int &n){
	//mở file để đọc
	ifstream myFile("input.txt"); //myFile là tên, đặc gì cũng được, input.txt là tên của file cùng cấp với file hiện tại
	//kiểm tra có mở được file hay không
	if (!myFile){
		cout<<"khong mo duoc";
		return;
	}
	// cin>>n; //nếu đề KHÔNG cho dòng đầu tiên và bắt nhập từ bàn phím
	// n = 1000; //nếu đề không nói gì thì tự mình cho số lượng, hoạc đề cho biết trước số lượng phần tử và không yêu cầu nhập
	myFile >> n; //nếu đề yêu cầu lấy số lượng phần tử từ file

	//cấp phát động cho mảng 1 chiều
	a = new int[n];

	//lấy các giá trị của các phần tử từ file input
	for(int i=0; i<n; i++){
		myFile >> a[i];
	}

	//đóng file khi đã làm việc xong
	myFile.close();
}

void xuat(int *a, int n){
	ofstream myFile("output.txt");
	for(int i=0; i<n; i++){
		myFile << a[i] << ' ';
	}
}

int main(){
	int *a, n;
	nhap(a, n);

	// nhớ xóa con trỏ mảng khi kết thúc chương trình
	delete [] a;
	return 0;

}