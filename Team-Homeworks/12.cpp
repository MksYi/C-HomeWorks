/*****************************************
*  C++ -> HomeWorks	    >HW12<	*
*				By-SiaoT*
*****************************************/
#include <iostream>
#include <iomanip>
using namespace std;

void out(int y,int m,int d){
	int sum = 0,mother[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (y % 4 == 0) { sum = 1; }
	for (int i = 0; i <= m; i++){
		sum = sum + mother[i];
	}
	sum = sum - mother[m] + d;
	cout << "您輸入的日期是" << y << "年";
	cout << setw(2) << setfill('0') << m << "月";
	cout << setw(0) << d << "日 是" << y << "年的第" << sum << "天" << endl;
}


int main(){
	int y,m,d;
	cin >> y >> m >> d;
	out(y, m, d);
	system("pause");
	return 0;
}

