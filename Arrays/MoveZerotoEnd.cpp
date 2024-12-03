#include<iostream>
using namespace std;


int moveZeros(int arr[],int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    return arr[9];
}




int main()
{
    int arr[] = {1, 0, 0, 0, 3, 4, 0, 5, 6, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<moveZeros(arr, size)<<endl;
    return 0;
}