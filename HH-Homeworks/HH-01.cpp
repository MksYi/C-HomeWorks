/*****************************************
*  C++ -> HH-HomeWorks	  	 >HW01<	*
*							By-SiaoT*
*****************************************/
#include<iostream>
using namespace std;
int main(){
	int x, sum = 0, average, max, min;
	int count = 0;
	while (cin >> x){
		sum = sum + x;	count++;
		if (count == 1){
			max = min = x;
		}
		if (x>max){
			max = x;
		}
		if (x<min){
			min = x;
		}
	}
	average = sum / count;
	cout << "個數=" << count << endl;
	cout << "總和=" << sum << endl;
	cout << "平均" << average << endl;
	cout << "最大值=" << max << endl;
	cout << "最小值" << min << endl;
	system("pause");
	return 0;
}
