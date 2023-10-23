#include <iostream>
using namespace std;

int main()
{
	const int numMonths = 6;
	double arr[numMonths];
	double total = 0;

	for (int i = 0; i < numMonths; i++) {
		cout << "Enter the profit for the month " << i + 1 << ": ";
		cin >> arr[i];
		total += arr[i];
	}
	cout << "Profit for each month: " << endl;
	for (int i = 0; i < numMonths; i++) {
		cout << "Month " << i + 1 << ": $ " << arr[i] << endl;
	}
	cout << "Total profit for 6 months: $ " << total << endl;
	return 0;
}