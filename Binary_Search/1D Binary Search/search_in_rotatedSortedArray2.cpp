#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int>& nums, int target) {
    int s = 0, e = nums.size() - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (nums[mid] == target)
            return true;

        if (nums[s] == nums[mid] && nums[mid] == nums[e]) {
            s++;
            e--;
            continue;
        }

        if (nums[s] <= nums[mid]) {
            if (nums[s] <= target && target < nums[mid])
                e = mid - 1;
            else
                s = mid + 1;
        } else {
            if (nums[mid] < target && target <= nums[e])
                s = mid + 1;
            else
                e = mid - 1;
        }
    }

    return false;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter rotated sorted array: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int target;
    cout << "Enter target: ";
    cin >> target;

    if (search(nums, target))
        cout << "Target Found";
    else
        cout << "Target Not Found";

    return 0;
}