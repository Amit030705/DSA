#include <iostream>
#include <vector>
using namespace std;

int ceilElement(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = arr[mid];
            high = mid - 1;    // Search left for a smaller ceil
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter sorted array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cout << "Enter x: ";
    cin >> x;

    cout << "Ceil = " << ceilElement(arr, x);

    return 0;
}