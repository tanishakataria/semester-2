#include <iostream>
using namespace std;
bool hasSubsetSum(int arr[], int size, int targetSum) {
    // Base cases
    if (targetSum == 0)
        return true;
    if (size == 0)
        return false;
    if (arr[size - 1] > targetSum)
        return hasSubsetSum(arr, size - 1, targetSum);
    return hasSubsetSum(arr, size - 1, targetSum - arr[size - 1]) || hasSubsetSum(arr, size - 1, targetSum);
}
int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 9;

    if (hasSubsetSum(arr, size, targetSum))
        cout << "There is a subset with the specified sum." << endl;
    else
        cout << "There is no subset with the specified sum." << endl;

    return 0;
}
