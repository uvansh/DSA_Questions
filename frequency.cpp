#include<iostream>
using namespace std;


//Sorted Array
void frequency(int arr[],int size){
    if(size == 0) return;

    int count = 1;
    for(int i = 1;i<size;i++){
        if(arr[i] == arr[i-1]){
            count++;
        }
        else{
            cout<<arr[i-1]<<" "<<count<<endl;
            count=1; //reseting count to 1
        }
    }
    cout<<arr[size-1]<<" "<<count<<endl;
}


int main()
{
    int arr[]={1,1,1,1,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    frequency(arr,size);
    return 0;
}