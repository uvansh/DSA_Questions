#include<iostream>
using namespace std;

int distinctElem(int arr[],int size)
{
    int count = 0;
    for(int i = 0; i < size; i++){
        for(int j =i+1; j < size; j++){
            if(arr[j]==arr[i])
            {
                count=count+1;
                break;
            }
            else{
                count--;
            }
        }
    }
    return count;
}

int main(){
    int arr[] = {15,12,13,12,13,13,18};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<distinctElem(arr, size);
    return 0;
}