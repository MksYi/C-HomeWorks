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
	cout << "�Ӽ�=" << count << endl;
	cout << "�`�M=" << sum << endl;
	cout << "����" << average << endl;
	cout << "�̤j��=" << max << endl;
	cout << "�̤p��" << min << endl;
	system("pause");
	return 0;
}
