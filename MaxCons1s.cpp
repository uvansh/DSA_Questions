#include<iostream>
using namespace std;

//Naive Implementation O(n^2)
int max1s(int arr[],int size){
    int res = 0;
    for(int i = 0;i<size;i++){
        int curr = 0;
        for(int j = i;j<size;j++){
            if(arr[j]==1) curr++;
            else break;
        }
        res = max(res,curr);
    }
    return res;
}


int main(){
    int arr[] = {1,0,0,1,1,1,0,1,1,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<max1s(arr,size)<<" ";
    return 0;
}