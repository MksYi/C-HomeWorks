/*****************************************
*	C++ -> HomeWorks	>>02<<	*
*				By-SiaoT*
*****************************************/
#include <iostream>
#include <iomanip>
#define PI 3.14
#define Degree 360
using namespace std;

int main(){
	double r,d,out, a, p;
	cout << "�п�J�b�|���סG"; cin >> r;
	cout << "�п�J���Ψ��סG"; cin >> d;
	a = r*r*PI;
	p = r * 2 * PI;
	//���ΩP��
	out = (p * (d / Degree)) + (r * 2);
	cout << fixed << setprecision(2) << out << endl;
	//���έ��n
	out = a * (d / Degree);	
	cout << fixed << setprecision(2) << out << endl;
	//��ΩP��
	cout << fixed << setprecision(2) << p << endl;
	//��έ��n
	cout << fixed << setprecision(2) << a << endl;

	system("pause");
	return 0;
}