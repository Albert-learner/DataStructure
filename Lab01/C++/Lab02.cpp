#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

//���Ͽ��� ���庰�� �ܾ� �о�鿩 �� �ܾ��� ���� ����

int main(void)
{
	ifstream in;
	string line;
	in.open("lab0-2.dat");

	while (getline(in, line))
	{
		istringstream sin(line);
		string word;
		int wc = 0;
		while (getline(sin, word, ' '))
		{
			wc++;
			
		}
		//\n�� ������ �� ��ŭ �ܾ� ���� ����, �ܾ� �� �� ����ϱ�
		cout << line << endl;
		cout << "The number of words: " << wc << '\n';
	}
}
