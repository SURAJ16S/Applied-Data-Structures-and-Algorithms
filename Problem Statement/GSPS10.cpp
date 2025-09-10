/* DONE
Maximize Number of Tasks Done
Statement : Do Max Tasks with Durations a[] in total time T.
Input : a[]={4,3,1,2} T=5
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int N;// enter total task
cout<<"Enter Total No. Of Task : ";
cin>>N;
int Task[N];
for(int i =0;i<N;i++){
    cout<<"Enter Duration of task "<<i+1<<" : ";
    cin>>Task[i];
}
int T ; // to store the total time
cout<<"Enter Total Time : ";
cin>>T;
int count =0; //to store how many task can be done in T time
// sort the array in ascending order so that maximum number of task can be done
sort(Task,Task+N);      //now the array is sorted in ascending order
//traverse the array and reduce the time T to count total Task that can be done in the time T
for(int i=0;i<N;i++){
    if(Task[i]<=T){
        T-=Task[i];
        count++;
    }
    else{
        break;
    }
}

cout<<"Maximum Number of Task That Can be Done in "<<T<<" Time is :"<<count<<endl;
    return 0;
}