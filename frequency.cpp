#include<iostream>
using namespace std;

//Sorted Array
void frequency(int arr[],int size){
    int freq = 1,i=1;
    while(i<size){
        while(i<size && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i]<<" ";
        i++;
        freq=1;
    }
    if(size==1|| arr[size-1]!=arr[size-2]){
        cout<<arr[size-1]<<" "+1;
    }
}

int main()
{
    int arr[]={1,1,1,1,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    frequency(arr,size);
    return 0;
}