/*****************************************
*  C++ -> HH-HomeWorks	   	>HW03<	*
*							By-SiaoT*
*****************************************/
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int f[100], i = 0, total = 0,s = 1 ;
	int n, k, r;
	while (cin>>n){
		char str = cin.peek();
		if ( str == ',')
			cin.ignore(1);
		f[i] = n;						//f[0] == 11
		if (i > 0)						//f[1 to 4] == 2,2,2,2
			total = total + f[i];		//total == 4+1+2 = 7
		i++;
	}
	k = f[0] - total;					//10 - 7 = 3[k] 

	if (k < i - 2)						//k < i - 1 
		cout << "組合無法構成間距" << endl;
	else{
		r = k - (i - 2);	
		if (r > k){
			for (int m = r + k; m > r; m--)
				s = s * m;
			for (int m = 1; m <= k; m++)
				s = s / m;
		}
		else if (k > r){
			for (int m = k + r; m > k; m--)
				s = s * m;
			for (int m = 1; m <= r; m++)
				s = s / m;
		}
		cout << s << endl;
	}	
	system("pause");
	return 0;

}
