/*
6. Different Ways to Add Parentheses

Description: Given a string of numbers/operators, compute all results by different parenthesizations.

Input: "2-1-1"
Output: [0,2]
*/
#include <iostream>
#include <string>
#include <cstdlib> // for atoi (convert string to integer)
using namespace std;

const int MAX = 20; // maximum number of results we can store

// This function recursively computes all possible results for the given expression
int computeWays(string expr, int results[]) {
    int count = 0;

    // Go through the expression character by character
    for (int i = 0; expr[i] != '\0'; i++) {
        char current = expr[i];

        // If we find an operator, split the expression
        if (current == '+' || current == '-' || current == '*') {
            // Left and right parts of the expression
            string left = expr.substr(0, i);
            string right = expr.substr(i + 1);

            // Arrays to store results of each part
            int leftValues[MAX];
            int rightValues[MAX];

            // Recursive calls to compute results for each part
            int leftCount = computeWays(left, leftValues);
            int rightCount = computeWays(right, rightValues);

            // Combine results from left and right based on the operator
            for (int a = 0; a < leftCount; a++) {
                for (int b = 0; b < rightCount; b++) {
                    if (current == '+') {
                        results[count] = leftValues[a] + rightValues[b];
                        count = count + 1;
                    }
                    else {
                        if (current == '-') {
                            results[count] = leftValues[a] - rightValues[b];
                            count = count + 1;
                        }
                        else {
                            if (current == '*') {
                                results[count] = leftValues[a] * rightValues[b];
                                count = count + 1;
                            }
                        }
                    }
                }
            }
        }
    }

    // If no operator was found, treat the expression as a single number
    if (count == 0) {
        int number = atoi(expr.c_str()); // convert string to integer
        results[0] = number;
        count = 1;
    }

    return count; // total number of results found
}

// Main function to take input and show results
int main() {
    string input;
    int output[MAX];

    cout << "Enter expression (e.g. 2-1-1): ";
    cin >> input;

    int totalResults = computeWays(input, output);

    cout << "Possible results from different parenthesizations:" << endl;
    for (int i = 0; i < totalResults; i++) {
        cout << output[i] << " ";
    }

    cout << endl;
    return 0;
}