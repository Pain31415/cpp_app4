#include <iostream>
#include <limits>

using namespace std;

int main() {
    int N;

    do {
        cout << "Enter the size of the array N: ";
        cin >> N;

        if (N <= 0) {
            cout << "N should be greater than 0. Please try again." << endl;
        }

        if (N >= 100) {
            cout << "N is too large. Please enter a smaller value." << endl;
        }
    } while (N <= 0 || N >= 100);

    double* arr = new double[N];

    for (int i = 0; i < N; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    double negativeSum = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] < 0) {
            negativeSum += arr[i];
        }
    }
    cout << "Sum of negative elements: " << negativeSum << endl;

    double minElement = arr[0];
    double maxElement = arr[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < N; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    double productBetweenMinMax = 1.0;
    int startIndex = min(minIndex, maxIndex);
    int endIndex = max(minIndex, maxIndex);

    for (int i = startIndex + 1; i < endIndex; ++i) {
        productBetweenMinMax *= arr[i];
    }
    cout << "Product of elements between min and max: " << productBetweenMinMax << endl;

    double productOfEvenIndexes = 1.0;
    for (int i = 0; i < N; i += 2) {
        productOfEvenIndexes *= arr[i];
    }
    cout << "Product of elements with even indices: " << productOfEvenIndexes << endl;

    int firstNegativeIndex = -1;
    int lastNegativeIndex = -1;

    for (int i = 0; i < N; ++i) {
        if (arr[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            }
            lastNegativeIndex = i;
        }
    }

    double sumBetweenNegatives = 0;
    if (firstNegativeIndex != -1 && lastNegativeIndex != -1) {
        for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; ++i) {
            sumBetweenNegatives += arr[i];
        }
    }

    cout << "Sum of elements between the first and last negative elements: " << sumBetweenNegatives << endl;

    delete[] arr;

    return 0;
}