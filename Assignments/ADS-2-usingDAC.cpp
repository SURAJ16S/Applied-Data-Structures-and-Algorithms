/*
Implement a problem of move all zeroes to end of array.

Statement: Given an array of random numbers, push all the zeroes
of the given array to the end. The order of all other (non-zero) elements
should remain the same.

Example:
Input:  arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
Output: arr[] = {1, 2, 4, 3, 5, 0, 0, 0};
*/
#include <iostream>
using namespace std;

// Merge while maintaining order and pushing zeroes to end
void mergeZeroPush(int arr[], int left, int mid, int right) {

    int temp[right - left + 1], k = 0;

    // Copy non-zero elements from both halves in order
    for (int i = left; i <= right; ++i) {
        if (arr[i] != 0)
            temp[k++] = arr[i];
    }

    // Fill the rest with zeroes
    while (k < right - left + 1){
        temp[k++] = 0;
    }


    // Write back to original array
    for (int i = left, j = 0; i <= right; ++i, ++j)
        arr[i] = temp[j];
}

// Divide and conquer driver
void moveZeroes(int arr[], int left, int right) {
    //base case
    if (left >= right) return;        //check if the part is smaller is yes then do nothing
 
    int mid = left + (right - left) / 2;         //array middle is calculated from this place now 
    moveZeroes(arr, left, mid);
    moveZeroes(arr, mid + 1, right);
    mergeZeroPush(arr, left, mid, right);
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) cin >> arr[i];

    moveZeroes(arr, 0, size - 1);

    cout << "After pushing zeroes: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
