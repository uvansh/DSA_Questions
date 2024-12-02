#include <iostream>
using namespace std;

bool SubarraySum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        int current_sum = 0;
        for (int j = i; j < size; j++)
        {
            current_sum += arr[j];
            if (current_sum == target)
                return true;
        }
    }
    return false;
}


//Efficient Implementation
bool SubarraySum2(int arr[],int size,int target){
    int s = 0,curr = 0;
    for(int e = 0;e<size;e++){
        curr+=arr[e];
        while(target<curr){
            curr -=arr[s];
            s++;
        }
        if(curr==target){
            return true;
        }
    }
    return false;
}


// No negative elements in the array
int main()
{
    int arr[] = {1, 4, 0, 0, 3, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    cout << boolalpha << SubarraySum(arr, size, target);
    return 0;
}