/*****************************************
*  C++ -> HH-HomeWorks	   	>HW02<	*
*							By-SiaoT*
*****************************************/
#include <iostream>
using namespace std;

int main(){
	char s[128];
	int i, temp = 0;
	int index = 0, index_en[52] = { 0 }, space = 0;
	cin.getline(s, 128);
	while (s[index] != '\0'){
		for (i = 0; i <= 25; i++){				//if se or me >>
			temp = 0;
			if (s[index] >= 'a' && s[index] <= 'z'){
				if (s[index] == 'a' + i){
					index_en[i]++;
					temp = 1;
				}
			}
			if (s[index] >= 'A' && s[index] <= 'Z'){
				if (s[index] == 'A' + i){
					index_en[i + 26]++;
					temp = 1;
				}								// <<
			}
			if (temp == 1)break;				// if find En exit (for)
		}
		if (s[index] == ' '){					// find space
			space++;							// space++
		}
		index++;
	}
	for (i = 0; i <= 25; i++){					//a=0,b=1....A=26,B=27...Z=52
		if (index_en[i] != 0 && i <= 25){		//SE
			cout << char(i + 97) << "¡G" << index_en[i] << " ";
		}
		if (index_en[i + 26] != 0 && i <= 25){	//ME
			cout << char(i + 65) << "¡G" << index_en[i + 26] << " ";
		}
	}
	cout << "Space¡G" << space << endl;			//Space
	system("pause");
}

