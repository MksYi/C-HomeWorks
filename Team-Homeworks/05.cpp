/*****************************************
*	C++ -> HomeWorks	>>05<<	*
*				By-SiaoT*
*****************************************/

#include <iostream>
using namespace std;

int prime(int n){
	int i = 2, j, x = 2, index = 1, count;
	if (n == 1){ return 2; }
	while (n != index){
		count = 0;	i++;
		while (count < 2){
			for (j = 1; j < i; j++){
				if (i%j == 0)count++;
			}
			if (count < 2) index++;
		}
	}
	return i;
}

int main(){
	int n;
	cin >> n;
	cout << "第" << n << "個質數為" << prime(n) << endl;
	system("pause");
}

