#include <iostream>
using namespace std;

int main(){
	double x, y, yy;
	cout << "�п�J�^�`�έ^�T�ƭȡG";cin >> x >> y;
	double xx = int( ( yy = (2.54 * (x * 12 + y))) / 100) ;
	yy = yy - (xx * 100);
	cout << x << " �^�` " << y << " �^�T = " << xx << " ���� " << yy << " ���� " << endl;
	system("pause");
	return 0;
}