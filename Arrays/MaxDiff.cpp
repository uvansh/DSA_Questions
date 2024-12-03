#include <iostream>
using namespace std;

// Naive implementation O(n^2)
void MaxDiff(int arr[],int size)
{
    int curr_diff = arr[1]-arr[0];
    for(int i = 0; i < size-1; i++)
    {
        for(int j =i+1;j<size; j++)
        {
            curr_diff = max(curr_diff, arr[j] - arr[i]);
        }
    }
    cout<<curr_diff;
}

//Efficient implementation
int maxDiff(int arr[], int size)
{
    int min_element = arr[0];
    int max_diff = arr[1] - arr[0];

    for(int j = 1; j < size; j++)
    {
        max_diff = max(max_diff, arr[j] - min_element);
        min_element = min(min_element, arr[j]);
    }
    return max_diff;
}

int main()
{
    int arr[] = {30,10,8,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    MaxDiff(arr,size);
    return 0;
}