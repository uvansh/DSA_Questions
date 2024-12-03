#include<iostream>
using namespace std;

//Not Sliding Window (Naive Implementation).
int MaxSum(int arr[],int size,int k){
    
    int res = 0;
    for(int i = 0;i+k-1<size;i++){
        int current_max = 0;
        for(int j = 0;j<k;j++){
            current_max+=arr[i+j];
            res = max(current_max,res);
        }
    }
    return res;
}


//Sliding window technique.
int MaxSum2(int arr[],int size,int k){
    
    int res = 0;
    int window = 0;
    for(int i = 0;i<k;i++){
        window += arr[i];
    }
    res = window; // Initialize the result with the first window sum
    for(int i = k;i<size;i++){
        window += arr[i] - arr[i-k]; //i-k = 0 index for first iteration
        res = max(res,window);
    }
    return res;
}



int main(){
    int arr[] = {1,8,20,-5,20,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout<<MaxSum(arr,size,k);
    return 0;
}