#include<iostream>
using namespace std;


int getWater(int arr[],int size)
{
    int res = 0;
    int lMax[size],rMax[size];
    lMax[0]=arr[0];
    for(int i = 1;i<size;i++){
        lMax[i]=max(arr[i],lMax[i-1]);
    }
    rMax[size-1]=arr[size-1];
    for(int i=size-2;i>=0;i--){
        rMax[i] = max(arr[i],rMax[i+1]);
    }
    for(int i = 1;i<size-1;i++){
        res = res+(min(lMax[i],rMax[i])-arr[i]);
    }
    return res;

}




int main(){
    int arr[] = {5,0,6,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<getWater(arr,size)<<" ";
    return 0;
}