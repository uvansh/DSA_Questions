#include<iostream>
#include<unordered_map>
using namespace std;

int maxLen(int arr[],int size){
    int curr_sum = 0;
    int count = 0;
    unordered_map<int,int> m;
    for(int i = 0;i<size;i++){
        curr_sum+=arr[i];
        if(m.find(curr_sum-sum)!=m.end()){
            count=max(count,i-m[curr_sum-sum]);
        }
        if(curr_sum==sum){
            count=i+1;
        }
        if(m.find(curr_sum)==sum){
            m.insert({curr_sum,i});
        }
    }

    return 0;
}

int main(){
    return 0;
}
