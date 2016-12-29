/*****************************************
*	C++ -> HomeWorks	>>06<<	*
*				By-SiaoT*
*****************************************/

#include <iostream>
using namespace std;

int main(){
	int x = 0, index = 0, temp, student, nps[100], score[100];
	int i, j;
	cin >> student;
	cin >> nps[0];
	if (nps[0] > student) { cout << "人數錯誤"; return 0; }
	for (int i = 0; i < student; i++){			//輸入每位學生成績
		cin >> score[i];
		if (score[i] < 60) { x++; index = 1; }
	}
	if (index){
		for (i = 0; i < student - 1; i++){
			for (j = 0; j < student - i - 1; j++){
				if (score[j] > score[j + 1]){
					temp = score[j]; score[j] = score[j + 1]; score[j + 1] = temp;
				}
			}
		}
		if (score[nps[0]] >= 60) score[nps[0]] = 60;
		cout << "當掉" << score[nps[0]] << "分（不包含）以下的人" << endl;
	}
	else{
		cout << "沒有人被當掉" << endl;
	}
	system("pause");
	return 0;
}