/*
Minimum no of platform
statement : find minimum no of platform required for the train so none wait
input : arr[900,910,950,1100,1500,1800]
        dep[910,1200,1120,1130,1900,2000]

        output : minimum number of platform = 3

        reference : https://www.geeksforgeeks.org/dsa/minimum-number-platforms-required-railwaybus-station/
*/

#include<iostream>
using namespace std;
int main(){
int N ; //store total no of trains
cout<<"Enter total number of trains : ";
cin>>N;
int count =0;
int arr[N],dept[N];
for(int i =0;i<N;i++){
    cout<<"Enter Arrival and Departure time of Train No "<<i+1<<" : ";
    cin>>arr[i]>>dept[i];
}
for(int i =0;i<N-1;i++){
    if(i=0){
        count++;
    }
    else if(arr[i]>dept[i-1]){
        continue;
    }
    else if(arr[i-1]>=arr[i] && arr[i]<=dept[i-1]){
        count++;
    }
    else if(arr[i]>=arr[i-1] && arr[i]<=dept[i-1]){
        count++;
    }
    else{
        continue;
    }
}
cout<<"minimum number of platform :"<<count<<endl;
    return 0;
}