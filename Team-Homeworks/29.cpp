#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	char Number[5];
	int index = 0, count = 0, A, B;
	char c[10];
	for (int i = 0; i < 10; i++){
		c[i] = i + 48;
	}
	for (int i = 0; i < 10; i++){
		int r = rand() % 9;
		int temp = c[r]; c[r] = c[i];  c[i] = temp;
	}
	do{
		cout << "�п�J�|�줣���ƼƦr�G"; cin >> Number;
		index = 0; A = 0; B = 0; count++;
		for (int i = 0; i < 4 && index != 1; i++){
			if (Number[i] >= '0' && Number[i] <= '9'){}
			else { cout << "�п�J�Ʀr�C" << endl; index = 1; count--; break; }
			if (Number[i] == c[i]){ A++; }
			for (int j = i+1 ; j < 4 && index != 1; j++){
				if (Number[i] == Number[j]){ cout << "�Ʀr���ơA�Э��s��J�C" << endl; index = 1; count--; break; }
			}
			for (int k = 0; k < 4; k++){
				if(Number[i] == c[k] && i != k) B++;
			}
		}
	cout << A << "A" << B << "B" << endl;
	if (count == 5){ cout << "�C�������A���T���׬��G" << c[0] << c[1] << c[2] << c[3] << endl; break; }
	} while (index == 1 || count < 5);
	if (A == 4) cout << "���ߵ���!" << endl;
	system("pause");
	return 0;
}