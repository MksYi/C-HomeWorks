/*****************************************
*  C++ -> HH-HomeWorks	   	>HW04<	*
*				By-SiaoT*
*****************************************/
#include <iostream>
using namespace std;

typedef struct _student{
	char name[16];
	int	 id;
	int	 math;
	int	 eng;
}TStudent;

char chenge(char a, char b){		//大小寫轉換
	a = toupper(a);
	b = toupper(b);
	if (a > b) return 1;
	else if (a < b) return -1;
}


int Compare(TStudent a, TStudent b){ //判斷排名
	int sum_a = a.math + a.eng, sum_b = b.math + b.eng;
	if (sum_a > sum_b)			return 1;
	else if (sum_a < sum_b)		return -1;
	else if (a.math > b.math)	return 1;
	else if (a.math < b.math)	return -1;
	else if (a.eng > b.eng)		return 1;
	else if (a.eng < b.eng)		return -1;
	else if (true){
		char c = cin.peek(); int i = 0;
		do {
			int result = chenge(a.name[i], b.name[i]);
			return result;
			i++;
		} while (c != '/0');
	}
	else if (a.id > b.id)		return 1;
	else if (a.id < b.id)		return -1;

}


int main(){
	int n;
	cin >> n;
	TStudent stu[100];
	for (int i = 0; i < n; i++){
		cin >> stu[i].name;
		cin >> stu[i].id;
		cin >> stu[i].math >> stu[i].eng;
	}
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			int result = Compare(stu[i], stu[j]);
			if (result == -1){
				TStudent temp;
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}
	for (int i = 0; i<n; i++)
	cout << stu[i].name << ' ' << stu[i].id << ' ' << stu[i].math << ' ' << stu[i].eng << endl;
}
