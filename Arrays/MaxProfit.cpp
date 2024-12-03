#include <iostream>
using namespace std;


//Naive implementation
int MaxProfit(int arr[], int start, int end)
{
    if (end <= start)
    {
        return 0;
    }

    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (arr[j] > arr[i])
            {
                int current_profit = (arr[j] - arr[i]) + MaxProfit(arr,start,i-1) + MaxProfit(arr,j+1,end);
                profit = max(profit,current_profit); 
            }
        }
    }

    return profit;
}


//Efficient implementation
int MaxProfit2(int arr[],int size)
{
    int profit = 0;
    for(int i =1;i<size;i++){
        if(arr[i]>arr[i-1]){
            profit+=(arr[i]-arr[i-1]);
        }
    }
    return profit;
}


int main()
{
    int arr[] = {1,5,3,8,12};
    int start=0;
    int size =sizeof(arr)/sizeof(arr[0]);
    int end = size;
    cout<<MaxProfit2(arr,size)<<endl;
    cout<<MaxProfit(arr,start,end)<<endl;
    return 0;
}