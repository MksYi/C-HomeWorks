/********************************
*	HH-HW	11		BY.SiaoT	*
**********************************/
#include <iostream>
using namespace std;

//Ex1 "can be calculate to 167,and not overflow."
int main(){
	int n, i;
	long long odd, even ;
	cin >> n;
	for (odd = 1, even = i = 0; i < n; odd += even, even += odd, i += 2);
	cout << even << endl;
	system("pause");
	return 0;
}


/* Ex2
long long f(long long n){
	if (n >= 2){
		return f(n - 1) + f(n - 2);
	}else if (f >= 0){
		return n;
	} else {
		cout << "ERROR" << endl;
		return 1;
	}
}

int main(){
	int x;
	cin >> x;
	cout << f(x) << endl;
	system("pause");
	return 0;
}
*/