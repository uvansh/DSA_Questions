#include <iostream>
using namespace std;

int countOne(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 0)
        {
            low = mid+1;
        }
        else
        {
            if (mid == 0 || arr[mid-1]==0)
                return (size-mid);
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {
        0,
        0,
        0,
        0,
        0,
        1,
        1,
        1,
        1,
        1,
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << countOne(arr, size);
    return 0;
}