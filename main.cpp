#include <iostream>
using namespace std;

int main()
{
	const int months= 12;
	double profits[months];

	for (int i = 0; i < months; ++i) {
		cout << "Enter profit for" << i + 1 << "month: ";
		cin >> profits[i];
	}
	int startMonth, endMonth;
	cout << "Enter start month: ";
	cin >> startMonth;
	cout << "Enter end month: ";
	cin >> endMonth;

    if (startMonth >= 1 && endMonth <= months && startMonth <= endMonth) {
        double minProfit = profits[startMonth - 1];
        double maxProfit = profits[startMonth - 1];
        int minMonth = startMonth;
        int maxMonth = startMonth;

        for (int i = startMonth; i <= endMonth; ++i) {
            if (profits[i - 1] < minProfit) {
                minProfit = profits[i - 1];
                minMonth = i;
            }
            if (profits[i - 1] > maxProfit) {
                maxProfit = profits[i - 1];
                maxMonth = i;
            }
        }

        cout << "Minimum profit: " << minProfit << " in months " << minMonth << endl;
        cout << "Maximum profit: " << maxProfit << " in months " << maxMonth << endl;
    }
    else {
        cout << "Incorrectly entered month range." << endl;
    }

    return 0;
}