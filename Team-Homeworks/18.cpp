#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float C, F, water;
	cin >> C;
	cout << fixed << setprecision(2) << (F = ((C * 9 / 5) + 32)) << 'F' << endl;
	if (C >= 100){
		cout << "¤ô»]®ð" << endl ;
	}else if (C <= 0){
		cout << "¦B" << endl ;
	}else
		cout << "¤ô" << endl ;
	system("pause");
	return 0;
}