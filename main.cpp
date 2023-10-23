#include <iostream>
using namespace std;

int main()
{
	const int numSides = 5;
	double sides[numSides];
	double perimeter = 0.0;
	cout << "Enter the lengths of the sides of the pentagon: ";
	for (int i = 0; i < numSides; i++)
	{
		std::cout << "Party" << (i + 1) << ": ";
		cin >> sides[i];
		perimeter += sides[i];
	}
	cout << "The perimeter of the pentagon is " << perimeter << endl;
	return 0;
}