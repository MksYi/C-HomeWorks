/*****************************************
*  C++ -> HomeWorks	    >HW01<	*
*				By-SiaoT*
*****************************************/
#include <iostream>
using namespace std;

void Primes(int n){
	int count = 1;
	for (int i = 2; i <= n; i++){
		int index = 0;
		for (int j = 2; j <= i; j++){
			if (i%j == 0){
				index++;
			}	
		}
		if (index == 1){
			cout << i;
			if (count <= 4){   //每輸出五個質數就換行
				cout << "，";
				count++;
			}else{
				cout << endl;
				count = 1;
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	if (n == 0){ cout << "Error"; return 1; }

	Primes(n);

	system("pause");
	return 0;
}
