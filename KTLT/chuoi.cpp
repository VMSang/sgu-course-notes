#include <bits/stdc++.h>
using namespace std;

void inthuong(string &s){
	for(char &x : s){
		x = tolower(x);
	}
}

void inhoa(string &s){
	for(char &x : s){
		x = toupper(x);
	}
}

void check(char s){
	if (isdigit(s)) cout<<"digit";
	else if (islower(s)) cout<<"lower";
	else cout<<"upper";
}

void check2(string s){
	int digit = 0, lower = 0, upper = 0;
	for (int x : s){
		if (isdigit(x)) digit++;
		else if (islower(x)) lower++;
		else upper++;
	}
	cout<<"digit" << digit<<endl;
	cout<<"lower" << lower<<endl;
	cout<<"upper" << upper<<endl;
}

int chuyenthanhsoINT(string s){
	int n = stoi(s);
	return n;
}

long long chuyenthanhsolonglong(string s){
	long long n = stoll(s);
	return n;
}

string soThanhXau(long long n){
	string s = to_string(n);
	return s;
}

int baiToanSoLon(string s){
	int sum = 0;
	for(int x : s){
		sum += x - '0';
	}
	return sum;
}
void in(string s){
	for(char x : s){
		cout<<x;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	
 	string s = "hello WORLD 123";
 	// s.push_back('@'); //một lần push chỉ push 1 phần tử
 	// cout<<s;
 	// s.pop_back();
 	// cout<<s;
 	// cout<<s.insert(2 , "@@@@@@@"); //không thể thêm lớn hơn size
 	// cout<<s.erase(2,3);
 	// string t = "hell";
 	// if (s.find(t) != string::npos){
 	// 	cout<<"found";
 	// }
 	// else{
 	// 	cout<<"no found";
 	// }
 	check2(s);
 	// in(s);
    return 0;
}