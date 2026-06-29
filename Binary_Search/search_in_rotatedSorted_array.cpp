#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();
    int s = 0, e = n - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        // Left half is sorted
        if (nums[s] <= nums[mid]) {
            if (nums[s] <= target && target < nums[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        // Right half is sorted
        else {
            if (nums[mid] < target && target <= nums[e]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the rotated sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int index = search(nums, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}