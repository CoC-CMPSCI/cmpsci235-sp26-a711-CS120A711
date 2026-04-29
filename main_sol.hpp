#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void makeVector(vector<int> &, int);
void printVector(vector<int>);
void insert(vector<int> &, int);
void insertionsort(vector<int> &);

void insert(vector<int> &number, int idx)
{
	int i;
	int key = number[idx];
	/**********************************/
	// Array version
	/**********************************/
	// for (i = idx - 1; i >= 0; i--)
	// {
	// 	if (number[i] > key)
	// 		number[i + 1] = number[i];
	// 	else
	// 		break;
	// }
	// number[i + 1] = key;
	/**********************************/
	// Vector Version
	/**********************************/
	vector<int>::iterator it;
	for (it = number.begin() + idx; it >= number.begin(); it--)
	{
		if (*it < key)
			break;
	}
	number.erase(number.begin() + idx);
	number.insert(it + 1, key);
}

void insertionsort(vector<int> &number)
{
	for (int i = 0; i < number.size(); i++)
	{
		insert(number, i);
	}
}

void makeVector(vector<int> &number, int N)
{
	srand(time(0));
	number.erase(number.begin(), number.end());
	for (int i = 0; i < N; i++)
	{
		number.push_back(rand() % 20);
	}
}
void printVector(vector<int> number)
{
	for (auto iter = number.begin(); iter != number.end(); iter++)
		cout << setw(5) << *iter;
	cout << endl;
}