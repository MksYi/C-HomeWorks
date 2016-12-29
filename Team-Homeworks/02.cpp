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
	cout << "請輸入半徑長度："; cin >> r;
	cout << "請輸入扇形角度："; cin >> d;
	a = r*r*PI;
	p = r * 2 * PI;
	//扇形周長
	out = (p * (d / Degree)) + (r * 2);
	cout << fixed << setprecision(2) << out << endl;
	//扇形面積
	out = a * (d / Degree);	
	cout << fixed << setprecision(2) << out << endl;
	//圓形周長
	cout << fixed << setprecision(2) << p << endl;
	//圓形面積
	cout << fixed << setprecision(2) << a << endl;

	system("pause");
	return 0;
}