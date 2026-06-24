/* 
implement the coin change problem 
statement : given an integer array of coins[] of size N representing different type of currency and an integer sum , the task is to find the number of ways to make sum by using 
different combination from coins[], 
note: assume that you have an infinite supply of each type of coins  
input : sum = 4,  coins[]={1,2,3}          output : 4
input : sum = 10, coins[]={2,5,3,6}        output : 5
*/

#include <iostream>
using namespace std;
int count(int coins[], int n, int sum){
    if (sum == 0)
        return 1;
    if (sum < 0)
        return 0;
    if (n <= 0)
        return 0;
    return count(coins, n, sum - coins[n - 1]) + count(coins, n - 1, sum);
}
int main(){
    int coins[] = {2,5,3,6};
    int n = sizeof(coins) / sizeof(coins[0]);
    int sum ;
    cout<<"Enter The Sum : "; 
    cin>>sum;
    cout << "Output : " << count(coins, n, sum);

    return 0;
}