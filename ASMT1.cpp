/*
Implement a problem of number of zeroes. 
Statement: Given an array of 1s and 0s which has all 1s first followed 
by all 0s? Find the number of 0s. Count the number of zeroes in the 
given array

*/

#include <iostream>
using namespace std;

int countZeros(int arr[], int n) {
    int low = 0, high = n - 1, firstZero = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == 0) {
            firstZero = mid;
            high = mid - 1; // Search on the left side
        } else {
            low = mid + 1;  // Search on the right side
        }
    }

    return n - firstZero;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n]; // Declare array of size n

    cout << "Enter the array elements (1s followed by 0s): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Number of zeroes: " << countZeros(arr, n) << "\n";
    return 0;
}