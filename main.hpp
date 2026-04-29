#ifndef MAIN_HPP
#define MAIN_HPP

// Insertion sort internals:
//   insert(vec, idx) — take vec[idx], place it at the correct position
//                      in the already-sorted prefix [0..idx-1].
//   insertionsort(vec) — call insert() for i = 0 .. N-1.

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
    // TODO: walk left from idx-1 while elements are greater than key,
    //       shift them right; place key at the gap.
    if (idx <= 0 || idx >= (int)number.size()) return;
    int key = number[idx];
    int i = idx - 1;
    while (i >= 0 && number[i] > key)
    {
        number[i + 1] = number[i];
        i--;
    }
    number[i + 1] = key;
}

void insertionsort(vector<int> &number)
{
    // TODO: call insert(number, i) for i = 0 .. N-1.
    for (size_t i = 0; i < number.size(); i++)
        insert(number, (int)i);
}

void makeVector(vector<int> &number, int N)
{
    srand(time(0));
    number.clear();
    for (int i = 0; i < N; i++)
        number.push_back(rand() % 20);
}

void printVector(vector<int> number)
{
    for (auto iter = number.begin(); iter != number.end(); iter++)
        cout << setw(5) << *iter;
    cout << endl;
}

#endif
