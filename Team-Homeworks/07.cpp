/*****************************************
*  C++ -> HomeWorks	    >HW07<	*
*				By-SiaoT*
*****************************************/

#include <iostream>
using namespace std;int main(){
	int key;
	cin >> key;
	for (int i = 1; i <= key; i++)
		if (key % i == 0)
			cout << i << " ";
	system("pause");
return 0;

