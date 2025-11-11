/*
implement a program to find all distinct subsets of a given set using bit masking approach.

Statement : Given an array of ineters arr[], the task is to find all its subsets . the subset cannot contain duplicate elemments , so any repeated subset should be considered only once in the output.
input : S={1,2,2}
output : {},{1},{2},{1,2},{2,2},{1,2,2}
input : S={1,2}
output : {},{1},{2},{1,2}
*/
#include<iostream>
using namespace std;
int main(){
int N; //enter total input size ;
cout<<"Enter Size of array :";
cin>>N;
int arr[N]; //enter array elements
for(int i =0;i<N;i++){
        cout<<"Enter element "<<i+1<<":";
    cin>>arr[i];
}

int totalSubsets = 1<<N; //2^N
cout<<"All Distinct Subsets are : "<<totalSubsets<<endl;

for(int i =0;i<totalSubsets;i++){
    cout<<"{ ";
    for(int j=0;j<N;j++){
        if(i & (1<<j)){  //i & (1<<j) : check if jth bit is set in i or not

            cout<<arr[j]<<" ";
        }
    }
    cout<<"}";
    cout<<endl;
}

//without duplicates 


    return 0;
}