#include<iostream>
using namespace std;

int binarySearch(int arr[], int x, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return mid; // Element found
        } else if (arr[mid] < x) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }
    return -1; // Element not found
}