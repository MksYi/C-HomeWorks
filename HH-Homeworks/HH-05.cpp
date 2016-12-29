/*****************************************
*  C++ -> HH-HomeWorks	   	>HW05<	*
*				By-SiaoT*
*****************************************/

#include <iostream>
#include <string.h>

using namespace std;


char chenge(char a, char b){		//大小寫轉換
	a = toupper(a);
	b = toupper(b);
	if (a > b) return 1;
	else if (a < b) return 0;
}

class _student{
public:
	char name[16];
	int	 id;
	int	 math;
	int	 eng;
	int operator > (_student b){	//判斷排名
		int cn = stricmp(name, b.name);
		int sum_a = math + eng, sum_b = b.math + b.eng;
		if (sum_a > sum_b)			return 1;
		else if (sum_a < sum_b)		return 0;
		else if (math > b.math)	return 1;
		else if (math < b.math)	return 0;
		else if (eng > b.eng)		return 1;
		else if (eng < b.eng)		return 0;
		else if (true){
			char c = cin.peek(); int i = 0;
			do {
				int result = chenge(name[i], b.name[i]);
				return result;
				i++;
			} while (c != '/0');
		}
		else if (id > b.id)		return 1;
		else if (id < b.id)		return 0;


	}

};

int main(){
	int n;
	cin >> n;
	_student stu[100];
	for (int i = 0; i < n; i++){
		cin >> stu[i].name >> stu[i].id;
		cin >> stu[i].math >> stu[i].eng;
	}
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (!(stu[i] > stu[j])){
				_student temp;
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}
	for (int i = 0; i<n; i++)
		cout << stu[i].name << ' ' << stu[i].id << ' ' << stu[i].math << ' ' << stu[i].eng << endl;
}
