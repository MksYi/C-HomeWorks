/*
*****************************
*	Team-HomeWork 13		*
*					by.SiaoT*
*****************************
*/

#include <iostream>
#define C 1000

using namespace std;

void print(int monery){
	long long out[100],index = 0;

	for (int i = 0; i < 100; i++)	//ªì©l¤Æ
		out[i] = -1;

	for (int i = 1; (monery / C) > 0; i++){
		out[i] = monery % C;
		monery = monery / C;
		index++;
	}
	cout << monery;
	for (; out[index]!=-1 ; index--){
		cout << ',' << out[index];
	}
	cout << endl;
	system("pause");
}


int main() {
	int in;
	cin >> in;

	print(in);
	return 0;
}