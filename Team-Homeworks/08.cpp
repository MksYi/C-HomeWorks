/*****************************************
*  C++ -> HomeWorks	    >HW08<	*
*				By-SiaoT*
*****************************************/
#include <iostream>
using namespace std;

int eng(char in){
	bool index; char u; char l;
	for (int i = 1; i <= 26; i++){
		u = i + 64; l = i + 96;
		if (in == char(u) || in == char(l)){
			index = true;
			break;
		}else{
			index = false;
		}
	}
	return index;
}

int main(){
	char *str; int out = 0; int i = 0;
	str = (char *)malloc(200*sizeof(char));
	cin >> str;
	do{
		if (eng(str[i]))
			out++;
		cout << out;
		i++;
	} while (str[i] != '\0');
	cout << endl;
	system("pause");
	free(str);
	return 0;
}