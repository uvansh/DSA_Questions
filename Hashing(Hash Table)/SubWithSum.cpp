#include<iostream>
#include<unordered_set>
using namespace std;

bool sumWithSub(int arr[],int size,int sum){
    for(int i = 0;i<size;i++ ){
        int curr_sum = 0;
        for(int j = i;j<size;j++){
            curr_sum +=arr[j];
            if(curr_sum==sum){
                return true;
            }
        }
    }  
    return false;
}

//Efficient implementation
bool sumWithSub2(int arr[],int size,int sum){
    unordered_set<int> s;
    int curr_sum = 0;
    for(int i = 0;i<size;i++){
        curr_sum += arr[i];
        if(curr_sum==sum){
            return true;
        }
        if(s.find(curr_sum-sum)!=s.end()){
            return true;
        }
        s.insert(curr_sum);
    }
    return false;
}

int main()
{
    int arr[] = {5,8,6,13,3,-1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 22;
    cout<<boolalpha<<sumWithSub2(arr,size,sum);
    return 0;
}