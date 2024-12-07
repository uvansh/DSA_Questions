#include <iostream>
using namespace std;

// Actually this is not a efficient solution
// As it took O(n) time for worst case
int countOccurence(int arr[], int size, int target)
{
    int count = 0;
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            count++;

            int left = mid - 1;
            while (left >= 0 && arr[left] == target)
            {
                count++;
                left--;
            }

            int right = mid + 1;
            while (right < size && arr[right] == target)
            {
                count++;
                right++;
            }
            break; // Exit after counting all occurences
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return count;
}


//Efficient and long solution first find firstIndex
//then find lastIndex subtract last with first 
//all target values are between them. O(log N)+O(log N) = O(log N)
int firstOccurence(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int firstIndex = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            firstIndex = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return firstIndex;
}

int lastOccurence(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int lastIndex = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            lastIndex = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return lastIndex;
}

int countOccurence2(int arr[], int size, int target)
{
    int firstIndex = firstOccurence(arr, size, target);
    if (firstIndex == -1)
    {
        return 0;
    }
    int lastIndex = lastOccurence(arr, size, target);
    return lastIndex - firstIndex + 1;
}

int main()
{

    int arr[] = {1, 1, 2, 2, 2, 3, 3, 3, 3, 4};
    int target = 2;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<countOccurence2(arr,size,target);
    // cout << firstOccurence(arr, size, target);
    return 0;
}