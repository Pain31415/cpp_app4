#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int arraySize = 20;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++) {
        arr[i] = rand() % 100 + 1;
    }

    int minElement = arr[0];
    int maxElement = arr[0];

    for (int i = 1; i < arraySize; i++) {
        minElement = std::min(minElement, arr[i]);
        maxElement = std::max(maxElement, arr[i]);
    }

    std::cout << "Massif: ";
    for (int i = 0; i < arraySize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Minimum element: " << minElement << std::endl;
    std::cout << "Maximum element: " << maxElement << std::endl;

    return 0;
}