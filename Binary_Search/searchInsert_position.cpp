#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    int i = 0, j = n - 1;
    int ans = n;

    while (i <= j) {
        int mid = i + (j - i) / 2;

        if (nums[mid] >= target) {
            ans = mid;
            j = mid - 1;
        }
        else {
            i = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int index = searchInsert(nums, target);

    cout << "Search Insert Position = " << index << endl;

    return 0;
}