/*
Implement a problem of move all zeroes to end of
array.
Statement: Given an array of random numbers, Push all the zero’s
of a given array to the end of the array. For example, if the given
arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to {1, 9,
8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all other elements should be
same.
Input :  arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
Output : arr[] = {1, 2, 4, 3, 5, 0, 0, 0};
*/

//using divide and conquer approach


// int main(){
// int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
// int n = sizeof(arr)/sizeof(arr[0]);                //11 position means 44 and size of 1 int is 4 so 44/4=11
//using additional array and swapping non zero elements to the front

/*    Without devide and conquer approach
int temp[n];
int i= 0;
int count = 0;
for(int j=0; j<n; j++){
    if(arr[j] != 0){
        temp[i] = arr[j];
        i++;
    }
    else{
        count++;
    }
}

//filing the rest with the zeroes
for(int j=i; j<n; j++){
    temp[j] = 0;
}
//print the result
for(int j=0; j<n; j++){
    cout<<temp[j]<<" ";
}
*/
//----------------------------------------------------------------------------------------------------------------------------------

/*
//another approach
int count = 0; //count of non zero elements
for (int i =0;i<n;i++){              //iterate array>
    if(arr[i]!=0){
        arr[count++]= arr[i];    //store non zero element to count which is increments and starts with 0
    }
}
while(count < n ){            // now the array consist of non zero elements and the rest position are empty till the size of array 
    arr[count]=0;             //we use the count to iterate the position, so set the remaining position to zero with incrementing count
    count++ ;
}
cout<<"Final array :";               //print array 
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
*/

//----------------------------------------------------------------------------------------------------------------------------------

/*
//third approach
int left = 0; //left pointer
int right = n-1; //right pointer
while(left < right){ //while left pointer is less than right pointer
    while(arr[left] != 0 && left < right){ //move left pointer until we find a zero or left pointer is less than right pointer
        left++;
    }
    while(arr[right] == 0 && left < right){ //move right pointer until we find a non-zero or left pointer is less than right pointer
        right--;
    }
    if(left < right){ //if left pointer is still less than right pointer, swap the elements
        swap(arr[left], arr[right]);
    }
//result 
}
cout<<"Final array :";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
 */
//another approach using divide and conquer approach (merge sort)
//strictly using the merge sort approach

#include<iostream>
using namespace std;

// Function to collect non-zero elements using divide and conquer
void collectNonZeros(int arr[], int start, int end, int temp[], int &index) {
    if (start == end) {
        if (arr[start] != 0) temp[index++] = arr[start];
        return;
    }

    int mid = (start + end) / 2;
    collectNonZeros(arr, start, mid, temp, index);
    collectNonZeros(arr, mid + 1, end, temp, index);
}

int main() {
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n], index = 0;

    // Only use divide step to scan and collect non-zero elements
    collectNonZeros(arr, 0, n - 1, temp, index);

    // Fill remaining with zeros
    while (index < n) temp[index++] = 0;

    // Print final result
    for (int i = 0; i < n; ++i)
        cout << temp[i] << " ";

    return 0;
}
