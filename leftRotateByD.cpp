#include <iostream>
using namespace std;


//Talke reference from reverse.cpp for the listed function
void leftRotateByD(int arr[],int size,int d)
{
    reverse(0,d-1);
    reverse(d,size-1);
    reverse(0,size-1);
}


void leftRotateByD(int arr[], int size, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < size; i++)
    {
        arr[i-d] = arr[i];  //we are doing our main logic of rotation
    }                       //i=d then arr[i-d]=arr[i] e.g d=2 then arr[2-2](0) = arr[2]
    for(int i = 0;i<d; i++)
    {
        arr[size-d+i] = temp[i]; // size-d+i = 6-2+0=4
    }
    //Printing
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    leftRotateByD(arr, size, d);
    return 0;
}