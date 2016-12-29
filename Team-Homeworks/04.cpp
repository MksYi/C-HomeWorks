#include <iostream>
#include <string>
using namespace std;

int main(){
	char* in = new char[];
	cin >> in;
	for (int i = 0; i < strlen(in); i++){
		if (in[i] >= 65 && in[i] <= 90){
			in[i] += 32;
		}else if (in[i] >= 97 && in[i] <= 122){
			in[i] -= 32;
		}
	}
	cout << in << endl;
	system("pause");
	return 0;
}