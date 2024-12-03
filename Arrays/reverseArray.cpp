#include<iostream>
#include<vector>
using namespace std;


//Naive implementation O(n^2)
/*
void reverse(int arr[],int size){
    int last = arr[size-1];
    int first = arr[0];
    for(int i=0;i<size;i++)
    {   
        for(int j = i+1;j<size;j++){
            swap(arr[i],arr[j]);
        }
    }
    arr[0] = last;
    arr[size-1] = first;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
*/
/*
swap function is doing
//int temp = arr[low];
//int arr[low] = arr[high];
int temp=arr[high];
*/
//Efficient implementation theta(n)
//Two pointer approach
void reverse(int arr[],int size)
{
    int low = 0,high = size-1;
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main()
{
    int arr[] = {1,4,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, size);
    return 0;
}