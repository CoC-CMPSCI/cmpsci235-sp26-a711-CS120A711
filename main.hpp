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
}

void insertionsort(vector<int> &number)
{
    // TODO: call insert(number, i) for i = 0 .. N-1.
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
