#include <iostream>
using namespace std;

/*
����Լ� ������� �ʰ� while�� ����Ͽ� ����Լ� �÷� ���� Ǯ��
*/

int sum(int n, int m)
{
	while (n > 0) {
		cout << "n= " << n << " m= " << m << ";  "; //printf("%d,%d\n", n, m);
		n--;
		m++;
	}
	cout << "n= " << n << " m= " << m << ';' << endl; //printf("%d,%d\n", n, m);
	return m;
}

int main(void)
{
	int n, m;
	cin >> n >> m;
	int temp=sum(n,m);
	cout << temp<<endl;
	return 0;
}

/*
while (n > 0)
{
cout << "n= " << n << " m= " << m << ';  '; ->''�� "" �� ����ϱ�
n--;
m++;
}
cout << "n= " << n << " m= " << m << ';'<<endl;
cout << "sum= " << n + m << endl;
return m;
*/