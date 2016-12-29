#include <iostream>
using namespace std;

void bin(int n , int z, int o){
	int x, y;
	x = n % 2;
	y = n / 2;
	if (x == 0) z++;
	else o++;
	if (n != 0){
		bin(y,z,o);
		cout << x;
	}else{
		cout << "共" << z-1 << "個0" << endl;
		cout << "共" << o << "個1" << endl;
	}
}

int main(){
	int in,one,zero;
	zero = one = 0;
	cin >> in;
	bin(in, zero, one);
	cout << endl;
	system("pause");
	return 0;
}