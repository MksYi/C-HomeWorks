/*****************************
*	THW		10			SiaoT*
******************************/
#include <iostream>
using namespace std;

int str(int x){
	int temp = 1;
	for (int i = 1; i <= x; temp *= i, i++);
	return temp;
}

int print(int n, int m){
	if (n == m) return 1;
	return str(n) / (str(m) * str(n - m));
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++){
			cout << print(i, j) << "  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}