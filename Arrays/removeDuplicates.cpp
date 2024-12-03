#include <iostream>
using namespace std;

int remDups(int arr[], int size)
{
    int res =1;
    for (int i = 1; i < size; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int arr[] = {10, 20, 20, 30, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << remDups(arr, size) << endl;
    return 0;
}
