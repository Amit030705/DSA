#include <iostream>
#include <vector>
using namespace std;

int findKRotation(vector<int> &nums) {
    int l = 0, r = nums.size() - 1;

    while (l < r) {
        int mid = l + (r - l) / 2;

        if (nums[mid] > nums[r])
            l = mid + 1;
        else
            r = mid;
    }

    return l;   // Index of the minimum element = Number of rotations
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

    int rotations = findKRotation(nums);

    cout << "Array is rotated " << rotations << " times." << endl;

    return 0;
}