#include <iostream>
using namespace std;

void f(int n){
	cout << "千元" << n / 1000 << "張" << endl;
	cout << "百元" << (n % 1000) / 100 << "張" << endl;
	cout << "50元" << (n % 100) / 50 << "枚" << endl;
	cout << "10元" << (n % 50) / 10 << "枚" << endl;
	cout << "1元"  << (n % 10) << "枚" << endl;
}

int main(){
	int in;
	cin >> in;
	f(in);
	system("pause");
	return 0;
}