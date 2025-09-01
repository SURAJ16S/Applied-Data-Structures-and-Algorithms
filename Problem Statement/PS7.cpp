/*
    Title:  Expression Add Operations
    Problem: 
    Insert Operators Between Digits to match a target value.
    Example: 
    Input: digit = "123", target = 6
    Output: ["1+2+3", "1*2*3"]
    
    Approach: Divide and Conquer (similar to Merge Sort)
*/

#include <iostream>
#include <string>
using namespace std;

// Recursive function to add all elements in array using divide and conquer
int mergeAdd(int a[], int low, int high)
{

    if (low == high)
    {
        // Base case: single element
        return a[low];
    }

    int mid = (low + high) / 2;

    // Recursively sum left and right halves
    int leftSum = mergeAdd(a, low, mid);
    int rightSum = mergeAdd(a, mid + 1, high);

    // Combine the results
    return leftSum + rightSum;
}

// Recursive function to multiply all elements in array using divide and conquer
int multiMerge(int a[], int low, int high)
{
    if (low == high)
    {
        // Base case: single element
        return a[low];
    }

    int mid = (low + high) / 2;

    // Recursively multiply left and right halves
    int leftMulti = multiMerge(a, low, mid);
    int rightMulti = multiMerge(a, mid + 1, high);

    // Combine the results
    return leftMulti * rightMulti;
}

int main()
{
    int arr[100];              // Array to store individual digits as integers
    int target = 0;            // Target value to match
    string result[100];        // Array to store valid expressions
    string str;                // Input string of digits
    bool first = true;         // Flag for formatting output
    int resultCount = 0;       // Count of valid expressions stored

    // Input: digits string
    cout << "Enter the Digit: ";
    cin >> str;

    // Input: target value
    cout << "Enter the Target: ";
    cin >> target;

    // Convert character digits to integers and store in array
    for (int i = 0; i < str.length(); ++i) {
        arr[i] = str[i] - '0';  // Convert char to int
        //why zero is subtracted? because ASCII value of '0' is 48, so subtracting it gives the integer value
        // for example str[4]='1' then 49 - 48 = 1
    }

    int size = str.length();   // Number of digits

    // Compute total sum using '+' between digits
    int totalSum = mergeAdd(arr, 0, size - 1);

    // Compute total multiplication using '*' between digits
    int totalMultiplication = multiMerge(arr, 0, size - 1);

    // Start output of valid expressions
    cout << "[";

    // Check if addition result matches target
    if (totalSum == target)
    {
        string expr = "";
        for (int i = 0; i < size; i++)
        {
            expr += to_string(arr[i]);
            if (i < size - 1) {
                expr += "+";  // Add '+' between digits
            }
        }

        // Format output
        if (!first) cout << ", ";
        cout << "\"" << expr << "\"";

        // Store the expression
        result[resultCount++] = expr;
        first = false;
    }

    // Check if multiplication result matches target
    if (totalMultiplication == target)
    {
        string expr = "";
        for (int i = 0; i < size; i++)
        {
            expr += to_string(arr[i]);
            if (i < size - 1) {
                expr += "*";  // Add '*' between digits
            }
        }

        // Format output
        if (!first) cout << ", ";
        cout << "\"" << expr << "\"";

        // Store the expression
        result[resultCount++] = expr;
        first = false;
    }

    cout << "]" << endl;

    // Print expressions stored in result array
    cout << "Result array content:" << endl;
    for (int i = 0; i < resultCount; ++i) {
        cout << result[i] << endl;
    }

    return 0;
}
