#include <iostream>
using namespace std;

/*
Factorial �Լ��� ����Լ��� �Ͽ� ���ϴ� ������ ���
*/

int Facto(int n)
{
	if (n == 1)
	{
		cout << n << " = ";
		return 1;
	}
	else
	{
		cout << n << '+';
		return n + Facto(n - 1);
	}
}

int main(void)
{
	int n;
	cin >> n;
	cout << Facto(n)<< endl; // cout <<Facto(n)<<endl; �� 2�� ������??? ���� Facto�Լ����� �� �� ������ݾ�
	return 0;
}