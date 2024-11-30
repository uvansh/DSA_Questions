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

int MaxSub2(int arr[],int size){
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i = 1;i<size;i++){
        maxEnding = max(maxEnding,arr[i]);
        res = max(res,maxEnding);
    }
    return res;
}


int main(){
    return 0;
}