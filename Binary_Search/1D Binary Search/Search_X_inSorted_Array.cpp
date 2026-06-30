#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();
    int i = 0, j = n - 1;
    bool flag = false;
    int ans = -1;

    while (i <= j) {
        int mid = i + (j - i) / 2;

        if (nums[mid] == target) {
            flag = true;
            ans = mid;
            break;
        }
        else if (nums[mid] > target) {
            j = mid - 1;
        }
        else {
            i = mid + 1;
        }
    }

    if (flag)
        return ans;

    return -1;
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
    cout << "Enter the target element: ";
    cin >> target;

    int index = search(nums, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}