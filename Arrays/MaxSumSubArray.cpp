#include<iostream>
using namespace std;

int MaxSub(int arr[],int size){
    int res = arr[0];
    for(int i = 0;i<size;i++){
        int curr = 0;
        for(int j = i;j<size;j++){
            curr = curr + arr[j];
            res = max(res,curr);
        }
    }
    return 0;
}


//Kadane's algorithm
int MaxSub2(int arr[],int size){
    int max_sum = arr[0];
    int current_sum = arr[0];
    for(int i = 1;i<size;i++){
        current_sum = max(arr[i],current_sum+arr[i]); // Either extend the subarray or start new
        max_sum = max(max_sum,current_sum);
    }
    return max_sum;
}


int main(){
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<MaxSub2(arr,size);
    return 0;
}