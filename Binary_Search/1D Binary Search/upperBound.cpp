#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Maybe this is the answer
        if (arr[mid] > x) {
            ans = mid;
            high = mid - 1;   // Search on the left
        }
        else {
            low = mid + 1;    // Search on the right
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the value to find upper bound: ";
    cin >> x;

    int index = upperBound(arr, n, x);

    if (index == n)
        cout << "Upper bound does not exist." << endl;
    else
        cout << "Upper bound index = " << index
             << "\nUpper bound value = " << arr[index] << endl;

    return 0;
}