using namespace std;
#include <iostream>
#include <cstdio>

int i = 0;

void L(int n, char A, char B, char C)
{
	if (n == 1)
	{
		cout << ++i << ": �N�� " << n << " �Ӷ�L�� " << A << " ���� " << C << endl;
	}
	else
	{
		L(n - 1, A, C, B);
		cout << ++i << ": �N�� " << n << " �Ӷ�L�� " << A << " ���� " << C << endl;
		L(n - 1, B, A, C);
	}
}

int main()
{
	int n;
	cout << "�п�J�c�d���𪺰��סG";
	cin >> n;
	L(n, 'A', 'B', 'C');
	cout << "���� " << n << "�h�c�d����@�ݭn " << pow(2, n) - 1 << " ��" << endl;
	system("pause");
	return 0;
}