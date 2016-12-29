#include <iostream>
using namespace std;

int main(){
	double x, y, yy;
	cout << "請輸入英呎及英吋數值：";cin >> x >> y;
	double xx = int( ( yy = (2.54 * (x * 12 + y))) / 100) ;
	yy = yy - (xx * 100);
	cout << x << " 英呎 " << y << " 英吋 = " << xx << " 公尺 " << yy << " 公分 " << endl;
	system("pause");
	return 0;
}