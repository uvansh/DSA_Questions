#include<iostream>
#include"BinarySearch.cpp"
using namespace std;

int infiniteBSearch(int arr[],int x)
{
    if(arr[0]==x) return 0;
    int i = 1;
    
    while(arr[i]<x)
    {
        i=i*2;
    }

    return binarySearch(arr,x,i/2+1,i);
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 7;
    cout<<infiniteBSearch(arr,x);
    return 0;
}