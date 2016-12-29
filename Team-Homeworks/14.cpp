/****************************************
*	THW	14					by.SiaoT	*
*****************************************/

#include <iostream>
#include <time.h>

using namespace std;

int main(){
	int x, n, rad, count[7] = {0};
	srand(time(NULL));
	n = rand() % 100 + 301;
	for (int i = 1; i <= n; i++){
		x = rand() % 6 + 1;
		for (int j = 1; j <= 6; j++){
			if (j == x){
				count[j]++; count[0]++;
				cout << i << " =  \t" << j << "\t";
				break;
			}
		}
	}
	cout << endl;
	for (int i = 1; i <= 6; i++){
		cout << "dice " << i << " = " << count[i] << endl;
	}
	system("pause");
	return 0;
}