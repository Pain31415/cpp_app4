#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 10;
	int arr[SIZE];

	cout << "Enter " << SIZE << " integers: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
	}
	cout << "Array in reverse order:" << endl;
	for (int i = SIZE - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}