#include <iostream>
#include <fstream>
using namespace std;
//���� 8���̹Ƿ� �޸� ���� ������ ���� �� �� ū 9�� �����մϴ�.
#define MAX_COL 9

/*
��, ��, ��(0�� �ƴ� ��)���� ���� shape ����ü �����մϴ�.
*/
typedef struct
{
	int row;
	int col;
	int value;
}shape;

/*
shape ����ü �迭 a�� shape ����ü �迭 b�� fast_transpose �˰����� �̿��Ͽ� �����մϴ�.
����ü �迭 a�� ����ü �迭 b�� �޾� a ����� ��ġ���� b��Ŀ� �����մϴ�.
6*6��Ŀ��� 0�� �ƴ� �� 8���� ���Ͽ��� �����ɴϴ�.
��� ���� ��ġ�ϱ� ���� ���� �������� ���� ���ؼ�, ���� �� ������� ������ ���� starting_pos�迭�� �߰������ݴϴ�.
�� row_terms�� ���������� ���ؼ� a ����ü �迭�� b����ü �迭�� �ű�ϴ�.
*/
void fast_transpose(shape a[], shape b[])
{

	int row_terms[MAX_COL], starting_pos[MAX_COL];
	int i, j, num_col = a[0].col, num_terms = a[0].value;

	b[0].row = num_col;
	b[0].col = a[0].row;
	b[0].value = num_terms;

	//0�� �ƴ� ���
	if (num_terms > 0)
	{
		for (i = 0; i < num_col; i++)
		{
			row_terms[i] = 0;
		}
		//�� row_terms ���� ��
		for (i = 1; i <= num_terms; i++)
		{
			row_terms[a[i].col]++;
		}

		//�� row_terms ������ ����
		starting_pos[0] = 1;
		for (i = 1; i < num_col; i++)
		{
			starting_pos[i] = starting_pos[i - 1] + row_terms[i - 1];
 		}
		//a����ü �迭�� b����ü �迭�� �ű�
		for (i = 1; i <= num_terms; i++)
		{
			j = starting_pos[a[i].col]++;
			b[j].row = a[i].col;
			b[j].col = a[i].row;
			b[j].value = a[i].value;
		}
	}
}

int main()
{
	ifstream fin;
	fin.open("lab2-1.txt");
	shape sha[9];
	shape trans[9];

	/*
	���� ������� ���� ��, ��, 0�� �ƴ� ���� �޾ƿɴϴ�.
	*/
	for (int i = 0; i < 9; i++)
	{
		fin >> sha[i].row >> sha[i].col >> sha[i].value;
		cout << sha[i].row << ' ' << sha[i].col << ' ' << sha[i].value << "\n";
	}
	
	//fast_transpose�˰����� �����Ͽ� sha ����ü �迭�� ��ġ���� trans ����ü �迭�� �����մϴ�.
	fast_transpose(sha, trans);
	cout << endl;

	//��ġ��Ų trans ����ü �迭�� ��, ��, ���� ����մϴ�.
	for (int j = 0; j < 9; j++)
	{
		cout << trans[j].row << ' ' << trans[j].col << ' ' << trans[j].value << "\n";
	}
	return 0;
}