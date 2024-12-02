#include <iostream>
using namespace std;


//Although it is efficient but there is a better approach
//O(n)
int getSum(int arr[], int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum +=arr[i];
    }
    return sum;
}


//Prefix sum implementation O(1).
int getSum2(int arr[],int size,int start,int end){
    int ps[size];
    ps[0] = arr[0];
    for(int i = 1;i<size;i++){
        ps[i] = ps[i-1]+arr[i];
    }
    if(start==0){
        return ps[end];
    }
    return ps[end]-ps[start-1];
}

int main()
{
    int arr[] = {2,8,3,9,6};
    int start = 0;
    int end = 2;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<getSum(arr,start,end);
    return 0;
}