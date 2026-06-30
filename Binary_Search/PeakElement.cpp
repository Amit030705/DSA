#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int n = nums.size();

    // Edge Cases
    if (n == 1)
        return 0;

    if (nums[0] > nums[1])
        return 0;

    if (nums[n - 1] > nums[n - 2])
        return n - 1;

    int s = 1, e = n - 2;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        // Peak found
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
            return mid;
        }
        // Increasing slope
        else if (nums[mid] > nums[mid - 1]) {
            s = mid + 1;
        }
        // Decreasing slope
        else {
            e = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int peakIndex = findPeakElement(nums);

    cout << "Peak Element Index: " << peakIndex << endl;
    cout << "Peak Element Value: " << nums[peakIndex] << endl;

    return 0;
}