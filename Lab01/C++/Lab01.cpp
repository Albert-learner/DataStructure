#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//최댓값 최소값 찾아내서 몇 번 째 위치에 있는지 출력하기

int findMax(vector<int>data, int n)
{
	int max = data[0];
	int maxPos = 0;
	for (int i = 1; i < n; i++)
	{
		if (data[i]>max)
		{
			max = data[i];
			maxPos = i;
		}
	}
	return maxPos;
}

int findMin(vector<int>data, int n)
{
	int min = data[0];
	int minPos = 0;
	for (int i = 1; i < n; i++)
	{
		if (data[i] < min)
		{
			min = data[i];
			minPos = i;
		}
	}
	return minPos;
}

int main(void)
{
	vector<int>vec;
	ifstream in("Lab0-1.dat");

	while (!in.eof())
	{
		int val;
		in >> val;
		vec.push_back(val);
	}

	int maxPos = findMax(vec, vec.size());
	int minPos = findMin(vec, vec.size());

	cout << "Minumum number is " << vec[minPos] << " at position " << minPos << ',' << endl;
	cout<< "Maximum number is " << vec[maxPos] << " at position " << maxPos << endl;
}