/*
Candy Distribution
Distribute Candies such that each kid with a higher score gets more than neighbours
Input : rating[1,0,2]
Output: 5

*/
#include<iostream>
using namespace std;
int main(){
    int N; //total student
    cout<<"Enter Total Number Of Students : ";
    cin>>N;
    int rating[N];
    int candies[N];  //to store total candies to be given to each student
    cout<<"Enter The Ratings Of Students : ";
    for(int i =0;i<N;i++){
        cin>>rating[i];
        candies[i]=1; //initially each student gets 1 candy
    }
    int totalCandies = 0;
    for(int i=0;i<N;i++){
        if(i > 0 && rating[i] > rating[i-1]){
            candies[i]+=candies[i-1]+1;
        }
        else if(i == 0){
            candies[i]=1;
        }
        totalCandies += candies[i];
    }
    cout<<"total candies :"<<totalCandies;
    return 0;
}