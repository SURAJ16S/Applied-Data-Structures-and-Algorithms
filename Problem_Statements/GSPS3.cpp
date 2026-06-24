/* DONE
Coin Change (minimum number of coins)
statement : Make value v with minimum coins 
input : 
coin[]={1,2,5,10,20}
V = 43
output : Coins Used : 20 20 2 1

 */

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N; //total number of coins
    cout<<"Enter Total Number of Coins : ";
    cin>>N;
    int Value;
    cout<<"Enter Value to be made : ";
    cin>>Value;
    int coin[N];
    cout<<"Enter Coin Values : ";
    for(int i=0;i<N;i++){
        cin>>coin[i];
    }
//sort in descending order : sort(arrname, arrname+size, greater<int>());
    sort(coin, coin+N, greater<int>());
    cout<<"Coins Used : ";
    int i=0;
while(Value>0 && i<N){
        if(coin[i]<=Value){
            cout<<coin[i]<<" ";
            Value = Value - coin[i];
        }
        else if (Value < coin[i]){
            i++;
        }
    }
    return 0;
}