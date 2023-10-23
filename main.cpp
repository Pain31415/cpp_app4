#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int numMonth = 12;
	double arr[numMonth];
	string month[numMonth] = { "January", "February", "March", "April", "May", "June", "July", "August", "September",
			"October", "November","December" };

	cout <<"Enter the company's profit for each month:" << endl;
	for (int i = 0; i < numMonth; i++)
	{
		cout << month[i] << ": ";
		cin >> arr[i];
	}
	double maxProfit = arr[0];
	double minProfit = arr[0];
	int maxMonth = 0;
	int minMonth = 0;

	for (int i = 1; i < numMonth; i++)
	{
		if (arr[i] > maxProfit)
		{
			maxProfit = arr[i];
			maxMonth = i;
		}
		if (arr[i] < minProfit)
		{
			minProfit = arr[i];
			minMonth = i;
		}
	}
	cout << "The maximum profit was in " << month[maxMonth] << " and was equal to " << maxProfit << endl;
	cout << "The minimum profit was in " << month[minMonth] << " and was equal to " << minProfit << endl;

	system("pause");
	return 0;
}