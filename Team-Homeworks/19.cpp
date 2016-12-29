/*****************************************
*  C++ -> HomeWorks	    >HW19<	*
*				By-SiaoT*
*****************************************/
#include <iostream>
#include <iomanip>
using namespace std;

float BMI(float h,float w){
	float b;
	h = h / 100;
	return b = w / (h*h);
}

void LNB(float bmi){
	if (bmi < 18.5){
		cout << "過輕" << endl;
	}
	else if (bmi > 24){
		cout << "過重" << endl;
	}
	else{
		cout << "體重正常" << endl;
	}
}

int main() {
	float height;
	float weight;
	cout << "輸入：" << endl;
	cout << "身高:"; cin >> height;
	cout << "體重:"; cin >> weight;

	system("cls");
	cout << fixed << setprecision(2) << "BMI:" << BMI(height, weight) << endl;
	LNB(BMI(height, weight));

	system("pause");
}
