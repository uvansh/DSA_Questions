#include <iostream>
using namespace std;

int Sqrt(int num)
{
    int i = 1;
    while(i*i<=num){
        i++;
    }
    return (i-1);
}

int BinarySqrt(int num)
{   
    int low = 1;
    int high = num;
    int ans = -1;
    while(low<=high){
        int mid = low+(high - low)/2;
        int sqrt = mid*mid;
        if(sqrt == num){
            return mid;
        }
        else if(sqrt>num){
            high = mid-1;
        }
    }
}


int main()
{
    int num = 14;
    int size = sizeof(num);
    cout << BinarySqrt(num);
    return 0;
}