#include <algorithm>
#include <iostream>
using namespace std;

int find_largest(int nums[], int n) {
    return *max_element(nums, nums + n);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << "\nLargest element of the said array: " << find_largest(nums, n);
    return 0;
}
