#include <iostream>
using namespace std;

void f(int n){
	cout << "�d��" << n / 1000 << "�i" << endl;
	cout << "�ʤ�" << (n % 1000) / 100 << "�i" << endl;
	cout << "50��" << (n % 100) / 50 << "�T" << endl;
	cout << "10��" << (n % 50) / 10 << "�T" << endl;
	cout << "1��"  << (n % 10) << "�T" << endl;
}

int main(){
	int in;
	cin >> in;
	f(in);
	system("pause");
	return 0;
}