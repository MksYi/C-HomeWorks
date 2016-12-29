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
		cout << "請輸入四位不重複數字："; cin >> Number;
		index = 0; A = 0; B = 0; count++;
		for (int i = 0; i < 4 && index != 1; i++){
			if (Number[i] >= '0' && Number[i] <= '9'){}
			else { cout << "請輸入數字。" << endl; index = 1; count--; break; }
			if (Number[i] == c[i]){ A++; }
			for (int j = i+1 ; j < 4 && index != 1; j++){
				if (Number[i] == Number[j]){ cout << "數字重複，請重新輸入。" << endl; index = 1; count--; break; }
			}
			for (int k = 0; k < 4; k++){
				if(Number[i] == c[k] && i != k) B++;
			}
		}
	cout << A << "A" << B << "B" << endl;
	if (count == 5){ cout << "遊戲結束，正確答案為：" << c[0] << c[1] << c[2] << c[3] << endl; break; }
	} while (index == 1 || count < 5);
	if (A == 4) cout << "恭喜答對!" << endl;
	system("pause");
	return 0;
}