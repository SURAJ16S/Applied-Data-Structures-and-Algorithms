/*
implement a problem of maximize profit by trading stocks based on given rate per day.
Statement : Given an array arr[] of N positive Integers which denotes the cost of selling 
and buying a stock on each of the N days . the task is to find the maximum 
profit that can be earned by buying a stock on or selling all previously bought stocks on a particular day

Input : 
arr[]={2,3,5}
Output : 5

Input :
arr[]={8,5,1} 
Output : 0

*/
#include<iostream>
using namespace std;

int main(){
    int N;     // size of array
    cout << "Enter Array Size : ";
    cin >> N;
    int arr[N];   // array declaration for storing the amount of stock

    cout << "Enter Stock Prices : " << endl;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int buyArray[N]; // to store buy prices
    int BuyArraySize = 0; // initialize properly
    int profit = 0; // variable to store the profit

    for(int i = 0; i < N - 1; i++){
        if(arr[i] < arr[i + 1]){
            buyArray[BuyArraySize++] = arr[i]; // store buy price
        }
        else if(arr[i] > arr[i + 1]){
            for(int j = 0; j < BuyArraySize; j++){
                profit += arr[i] - buyArray[j];
                buyArray[j] = 0; // reset after selling
            }
            BuyArraySize = 0; // reset size after selling
        }
    }

    // Final day check to sell remaining stocks
    for(int j = 0; j < BuyArraySize; j++){
        profit += arr[N - 1] - buyArray[j];
        buyArray[j] = 0;
    }

    cout << "Maximum profit is : " << profit << endl;
    return 0;
}
