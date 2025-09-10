/*
Gas Station Circuit Problem
Statement : Gas and Cost Arrays. find starting point to complete the circuit.

Input : Gas[]={1,2,3,4,5} Cost[] = {3,4,5,1,2}
Output : Start Index : 3
*/

#include<iostream>
using namespace std;
int main(){
int N ;// store the total station number
int Gas[N], Cost[N];
cout<<"Enter Total number of station : ";
cin>>N;

for(int i =0;i<N;i++){
    cout<<"Enter Gas at Station : "<<i+1<<" : ";
    cin>>Gas[i];
    cout<<"Enter Cost at Station : "<<i+1<<" : ";
    cin>>Cost[i];

    if(Cost[i]= N){
        cout<<"Start index :"<<Gas[i]<<endl;
    }
}

    return 0;
}