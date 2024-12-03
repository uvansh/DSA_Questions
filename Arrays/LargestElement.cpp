#include <iostream>
using namespace std;


//Naive implementation
int LargestElementIndex(int arr[],int size)
{
    int result = 0;
    for(int i = 0;i<size;i++)
    {
        for(int j = i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                result = i;
            }
        }
    }
    return result;
}



//Efficient implementation
int LargestElementIndex(int arr[], int size)
{

    int result = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[result])
        {
            result = i;
        }
    }
    return result;
}


//Naive Approach O(n^2)
/*
int secondElementIndex(int arr[], int size){
    int largest = LargestElementIndex(arr, size); //O(n)
    int res = -1;
    for(int i = 0;i<size;i++){     //O(n)
        if(arr[i]!=arr[largest]){
            if(res==-1){
                res = i;
            }
            else if(arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return res;
}
*/


//Efficient Approach O(n)
//{1,1,4,7,3,2,8}
int secondElementIndex(int arr[], int size){
    int res = -1,largest = 0;
    for(int i = 0;i<size;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res]){ //arr[i]>arr[res] because we want to change the res if there is any other value (at i) which is greater than current.
                res = i;
            }
            res=i;
        }
    }
}


int main()
{
    int arr[] = {30, 15, 89, 367, 221};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << LargestElementIndex(arr, size) << endl;
    cout << secondElementIndex(arr, size) << endl;
    return 0;
}