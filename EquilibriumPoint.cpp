#include <iostream>
using namespace std;

//Naive Implementation O(n^2).
bool ePoint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int ls = 0, rs = 0;
        for (int j = 0; j < i; j++)
        {
            ls += arr[j];
        }
        for (int k = i + 1; k < size; k++)
        {
            rs += arr[k];
        }
        if (ls == rs)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    return 0;
}