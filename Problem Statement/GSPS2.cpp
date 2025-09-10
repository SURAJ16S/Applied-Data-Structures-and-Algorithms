/*
Fractional Knapsack Problem
Statement : maximizee value with weight capasity ; can take fraction.
input :
N=3
W=50;
Value[] = {60,100,120}
Weight[] = {10,20,30}
Output : 
Max Value : 240
 */
 #include<iostream>
 #include<algorithm>
 using namespace std;
 int main(){
    int N ; //No of Values
        cout<<"Enter Number of Values :";
    cin>>N;
    int KFC ; //Knapsack Full Capacity
        cout<<"Enter Knapsack Full Capacity :";
    cin>>KFC;

    //array Declaration 
    int weight[N] , value[N];
    float pByw[N] ; //profit by weight ratio
//accept the array values
    for(int i =0;i<N;i++){
        cout<<"Enter Value and Weight of item "<<i+1<<" : ";
        cin>>value[i]>>weight[i];
    }

//Step 1: Calculate the profit by weight ratio
    for(int i=0;i<N;i++){
        pByw[i]= (float)value[i]/weight[i];  //type casting to float
    }
//step 2 : sort the profit by weight ratio in descending order
    // Create an index array to keep track of original positions
    int idx[N];
    for (int i = 0; i < N; i++) idx[i] = i;

    // Sort the idx array based on pByw values in descending order
    sort(idx, idx + N, [&](int a, int b){
        return pByw[a] > pByw[b];
    });
    
    int FinalProfit=0;
    //step 3 : greedy appraoch to fill the knapsack
    for(int i =0;i<N;i++){
        if(KFC >= weight[idx[i]]){
            FinalProfit += value[idx[i]];
            KFC -= weight[idx[i]];
        }
        else if(KFC > 0){
            FinalProfit += pByw[idx[i]] * KFC;
            KFC =0;
        }
        else{
            break;
        }
    }
    cout<<"Max Value : "<<FinalProfit<<endl;

    return 0;
 }

 /*
 Reference :
 https://medium.com/@dillihangrae/fractional-knapsack-greedy-approach-8f45dec7d2bf
 https://www.geeksforgeeks.org/dsa/fractional-knapsack-problem/
 */