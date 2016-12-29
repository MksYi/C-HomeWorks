/****************************
*	THW		09		SiaoT	*
*****************************/

#include <iostream>
#include <iomanip>
#define V 110
#define HM 60.0;
using namespace std;

int main(){
	float r, i, p, h, monery;
	int m;
	cin >> r >> m;
	i = V / r;		// V = IR, so I = V / I;
	p = i * V;		// P = I * V or P = (I^2)R
	p = p / 1000.0;	// W -> kw 
	h = m / HM;		// Minute -> Hour
	monery = p * h;	// kWh = P * H
	cout << fixed << setprecision(3) << monery << endl;
	system("pause");
	return 0;
}