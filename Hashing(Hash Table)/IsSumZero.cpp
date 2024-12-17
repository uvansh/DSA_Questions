#include <iostream>
#include<unordered_set>
using namespace std;

bool IsZeroSum(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            if (sum == 0)
            {
                return true;
            }
        }
    }
    return false;
}

//Efficient implementation O(n)
bool IsZeroSum2(int arr[], int size){
    int sum = 0;
    unordered_set<int> s;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
        if(s.find(sum) != s.end()){
            return true;
        }
        if(sum == 0){ //To handle case where the sum is negative [-3,2,1]
            return true;
        }
        s.insert(sum);
    }
    return false;
}

int main()
{

    int arr[] = {1, 4, 13, -3, -10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << boolalpha << IsZeroSum2(arr, size) << endl;
    return 0;
}