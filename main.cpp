#include "main.hpp"

int main()
{
	int N = 10;
	vector<int> number;

	// Test the insert() function with simple exampel values
	number = {1, 2, 8, 4, 10};
	cout << "******************** Test 1 ********************\n";
	cout << "Original Vector values\n";
	printVector(number);
	insert(number, 3);
	cout << "After call insert() one time \n";
	printVector(number);

	// Test the insert()  and insertionsort() function with random values
	cout << "******************** Test 2 ********************\n";
	makeVector(number, N);
	cout << "Original Vector values\n";
	printVector(number);
	insert(number, 1);
	cout << "After call insert() one time \n";
	printVector(number);
	insertionsort(number);
	cout << "After call insert() N-1 times \n";
	printVector(number);
}