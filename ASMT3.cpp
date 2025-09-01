/*
Assignment 3: Implement a problem of smallest number with at least a trailing zeroes in factorial.

Statement : given a number n, the task is to find the smallest number whose factorial contain at least n trailing zeroes.
input : n=1 output : 5
input : n=6 output : 25

*/

#include<iostream>
using namespace std;

// Function to count trailing zeroes in n!
int countTrailingZeroes(int n) {
   int count = 0;

   //how the for loop is working in depth
   
   
   for (int i = 5; n / i >= 1; i *= 5) {
      count += n / i;
   }
   return count;
}

// Binary search to find the smallest number whose factorial contains at least n trailing zeroes
int findSmallestNumber(int n) {
   int low = 0, high = 5 * n, ans = -1;
   while (low <= high) {
      int mid = low + (high - low) / 2;
      //cout<<"mid :"<<mid<<endl;

      int zeros = countTrailingZeroes(mid);
      if (zeros >= n) {
         ans = mid;
         high = mid - 1;
      } else {
         low = mid + 1;
      }
   }
   return ans;
}

int main(){
   //accept total required zeroes
   int n;
   cout<<"Enter the number of zeroes you want in the fatorial :";
   cin>>n;

   int result = findSmallestNumber(n);   //store the result in the result variable
   cout << "Smallest number with at least " << n << " trailing zeroes in factorial is: " << result << endl;

   return 0;
}