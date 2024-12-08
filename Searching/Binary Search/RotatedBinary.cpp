#include <iostream>
using namespace std;

int RotatedBinary(int arr[], int low, int high, int x, int n)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid]==x) return mid;
        if (arr[low] <= arr[mid])
        {
            if (x < arr[mid] && x >= arr[low])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (x <= arr[high] && x > arr[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 4, 4};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = n - 1;
    cout << RotatedBinary(arr, low, high, x, n) << endl;
    return 0;
}