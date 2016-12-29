#include <iostream>
#include <iomanip>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	double* arrNum; arrNum = new double[n + 1];
	arrNum[0] = 0;
	for (int i = 0; i <= n; i++){
		stringstream ss;
		ss << i; ss << '.'; ss << i;
		double tmp;
		ss >> tmp;
		arrNum[i] = tmp;
	}
	cout << arrNum[0] << endl;
	for (int i = 1; i <= n; i++){
		int q = (int) log10(arrNum[i]);
		cout << fixed << setprecision(q + 1) << arrNum[i] << endl;
	}
	system("pause");
	delete[] arrNum;
	return 0;
}