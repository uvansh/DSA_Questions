#include<iostream>
using namespace std;

//Naive implementation O(n^2)
/*
bool isSorted(int arr[],int size)
{
    bool flag = true;
    for(int i = 0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if(arr[i]>arr[j]){
                flag = false;
            }
        }
    }
    return flag;
}
*/
//Efficient implementation O(n)
bool isSorted(int arr[],int size)
{
    for(int i = 1;i<size;i++)
    {
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}










int main()
{
    int arr[] = {1,2,3,4,5,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<isSorted(arr,size)<<endl;
    return 0;
}