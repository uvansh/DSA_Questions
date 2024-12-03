#include <iostream>
using namespace std;

// Naive implementation
int MajorityElement(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > size / 2)
        {
            return i;
        }
    }
    return -1;
}

// Efficient Implementation
int MajorityElement2(int arr[], int size)
{
    int count = 1;
    int p2 = 0;
    for(int i = 1;i<size;i++){
        if(count==0){
            p2=i;
            count=1;
        }
        if(arr[p2]==arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    count=0;
    for(int i = 0;i<size;i++){
        if(arr[p2]==arr[i]){
            count++;
        }
        if(count<=size/2){
            p2=-1;
        }
        return p2;
    }
    return -1;
}

int main()
{
    int arr[] = {8, 7, 6, 8, 6, 6, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << MajorityElement(arr, size);
    return 0;
}