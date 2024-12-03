#include<iostream>
using namespace std;

void leftRotate(int arr[],int size)
{
    int low = 0;
    for(int i = 1; i < size; i++)
    {
        swap(arr[low],arr[i]);
        low++;
    }
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    leftRotate(arr,size);
    return 0;
}