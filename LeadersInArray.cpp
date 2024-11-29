#include <iostream>
using namespace std;


//Naive implementation O(n^2)
void Leaders(int arr[], int size)
{
    for (int i=0; i < size; i++)
    {
        bool isLeader = true;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                isLeader = false;
                break;
            }
        }
        if(isLeader)
        {
            cout<<arr[i]<<" ";
        }
    }
}


//Efficient implementation
void Leaders(int arr[], int size)
{
    int curr_leader = arr[size-1];
    cout<<curr_leader<<" ";
    
    for(int i=size-2;i>=0;i--)
    {   
        if(curr_leader<arr[i])
        {
            curr_leader=arr[i];
            cout<<curr_leader<<" ";
        }
    }    
}



//Main Function
int main()
{   
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    Leaders(arr, size);

    return 0;
}