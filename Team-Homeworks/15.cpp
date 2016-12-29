using namespace std;
#include <iostream>
#include <cstdio>

int i = 0;

void L(int n, char A, char B, char C)
{
	if (n == 1)
	{
		cout << ++i << ": 將第 " << n << " 個圓盤由 " << A << " 移到 " << C << endl;
	}
	else
	{
		L(n - 1, A, C, B);
		cout << ++i << ": 將第 " << n << " 個圓盤由 " << A << " 移到 " << C << endl;
		L(n - 1, B, A, C);
	}
}

int main()
{
	int n;
	cout << "請輸入盧卡斯塔的高度：";
	cin >> n;
	L(n, 'A', 'B', 'C');
	cout << "移動 " << n << "層盧卡斯塔共需要 " << pow(2, n) - 1 << " 次" << endl;
	system("pause");
	return 0;
}