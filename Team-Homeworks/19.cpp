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
		cout << "�L��" << endl;
	}
	else if (bmi > 24){
		cout << "�L��" << endl;
	}
	else{
		cout << "�魫���`" << endl;
	}
}

int main() {
	float height;
	float weight;
	cout << "��J�G" << endl;
	cout << "����:"; cin >> height;
	cout << "�魫:"; cin >> weight;

	system("cls");
	cout << fixed << setprecision(2) << "BMI:" << BMI(height, weight) << endl;
	LNB(BMI(height, weight));

	system("pause");
}
