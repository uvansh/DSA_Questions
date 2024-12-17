#include<iostream>
using namespace std;


//Only works with sorted arrays (Two Pointer technique).
bool pairWithSum(int arr[],int size,int sum)
{
    int low = 0;
    int high = size - 1;
    while(low<high)
    {
        int found_sum = arr[low]+arr[high];
        if(found_sum==sum)
        {
            return true;
        }
        else if(found_sum>sum)
        {
            high--;
        }
        else
        {
            low++;
        }

    }
    return false;
}





int main()
{
    int arr[] = {2,5,8,12,30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 17;
    cout<<boolalpha<<pairWithSum(arr,size,sum)<<endl;
    return 0;
}