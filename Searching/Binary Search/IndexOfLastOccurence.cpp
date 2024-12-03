#include <iostream>
using namespace std;

int IndexOfLastOccurrence(int arr[], int low, int high, int x, int n)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            if (arr[mid] != arr[mid + 1] || mid == n-1)
            {
                return mid;
            }
        }
        else if (x > mid)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,2,2,3,4,4,4};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    cout<<IndexOfLastOccurrence(arr,low,high,x,n)<<endl;
    return 0;
}