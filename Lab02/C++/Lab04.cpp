#include <iostream>
using namespace std;

/*
Fibonacci ������ ����Լ��� �Ͽ� ������ ���
*/

int Fibo(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

int main(void)
{
	int num;
	cin >> num;
	cout << Fibo(num)<<endl;
}
