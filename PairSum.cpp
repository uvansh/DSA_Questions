#include<iostream>
#include<unordered_set>
using namespace std;

bool pairSum(int arr[],int size,int sum){
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){
                return true;
            }
        }
    }
    return false;
}

bool pairSum2(int arr[],int size,int sum){
    unordered_set<int> s;
    for(int i = 0;i<size;i++){
        if(s.find(sum-arr[i])!=s.end()){
            return true;
        }
        else{
            s.insert(arr[i]);
        }
    }
    return false;
}

int main(){

    int arr[] = {3,2,8,15,-8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 12;
    // cout<<boolalpha<<pairSum(arr,size,sum);
    cout<<boolalpha<<pairSum2(arr,size,sum);
    return 0;
}