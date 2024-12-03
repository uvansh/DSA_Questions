#include <iostream>
#include <vector>
using namespace std;

//BruteForce Implementation O(n^3).
bool canPartitionBruteForce(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n - 1; ++i) { // First partition end
        for (int j = i + 1; j < n; ++j) { // Second partition end
            int sum1 = 0, sum2 = 0, sum3 = 0;
            for (int k = 0; k < i; ++k) sum1 += arr[k];
            for (int k = i; k < j; ++k) sum2 += arr[k];
            for (int k = j; k < n; ++k) sum3 += arr[k];
            if (sum1 == sum2 && sum2 == sum3) return true;
        }
    }
    return false;
}


//Efficient Implementation.
bool canPartitionEfficient(vector<int>& arr) {
    int totalSum = 0;
    for (int num : arr) totalSum += num;

    // If totalSum is not divisible by 3, we cannot partition
    if (totalSum % 3 != 0) return false;

    int targetSum = totalSum / 3;
    int partSum = 0, count = 0;

    for (int num : arr) {
        partSum += num;
        if (partSum == targetSum) {
            partSum = 0;
            count++;
        }
        if (count == 3) return true;
    }

    return false;
}

int main() {
    vector<int> arr = {5, 2, 6, 1, 1, 1, 1, 4};
    cout << (canPartitionEfficient(arr) ? "True" : "False") << endl;
    return 0;
}