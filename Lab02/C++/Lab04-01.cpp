#include <iostream>
using namespace std;

/*
Fibonacci ������ Recursive�Լ��� �ƴ� �Լ��� Ǯ��
*/

int sum(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
	{
		int bef, bbef, cur;
		bef = 1;
		bbef = 1;
		for (int i = 3; i < n; i++) 
		{
			cur = bef + bbef;
			bbef = bef;
			bef = cur;
		}
		return cur;
	}

}

int main(void)
{
	int n;
	cin >> n;
	cout << sum(n) << endl;
	return 0;
}