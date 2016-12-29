#include <iostream>
#include <string>
#define DEPOSIT 100000
using namespace std;

int main(){
	char* pd = "123456";
	char in[20];
	int choose, monery;
	cout << "No.1 STUST" << endl;
	cout << "Please input your 6-digit Password" << endl;
	cout << "Password reminder=123456" << endl;
	cin >> in;
	if (strcmp(pd,in)){
		cout << "Password Error,Please try again" << endl;
		system("pause");
		return 1;
	}
	cout << "No.1 STUST" << endl;
	cout << "deposit<1> or withdraw<2>?" << endl;
	cin >> choose;
	cout << "your balance still have 100000" << endl;
	cout << "how much your want to ";
	switch (choose){
	case 1:
		cout << "deposit" << endl;
		cin >> monery;
		cout << "your deposit was sureful,your balance still have " << DEPOSIT + monery << endl;

		break;
	case 2:
		cout << "withdraw" << endl;
		cin >> monery;
		if (monery > 1000) monery += 10;
		cout << "your withdraw was sureful,your balance still have " << DEPOSIT - monery << "include 10 of service fees";
		break;
	}
	cout << "thank you very much for using our service." << endl;
	system("pause");
	return 0;
}
