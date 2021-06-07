#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

//파일에서 문장별로 단어 읽어들여 총 단어의 개수 세기

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
		//\n이 나오면 그 만큼 단어 개수 세고, 단어 수 합 출력하기
		cout << line << endl;
		cout << "The number of words: " << wc << '\n';
	}
}
