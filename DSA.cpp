#include <iostream>
#include <limits.h> // For INT_MIN
using namespace std;
int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input validation
    if (n < 2) {
        cout << "Array should have at least two elements.\n";
        return 1;
    }

    int arr[n];

    // Input the elements of the array
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int first = INT_MIN, second = INT_MIN;

    // Find the largest and second largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    // Output the second largest element
    if (second == INT_MIN) {
        cout << "There is no second largest element.\n";
    } else {
        cout << "The second largest element is " << second << ".\n";
    }

    return 0;
}
