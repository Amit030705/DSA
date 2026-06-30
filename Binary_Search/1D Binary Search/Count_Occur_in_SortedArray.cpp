#include <iostream>
#include <vector>
using namespace std;

void first(vector<int>& nums, int target, int &ans1) {
    int s = 0, e = nums.size() - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (nums[mid] == target) {
            ans1 = mid;
            e = mid - 1;
        }
        else if (nums[mid] > target) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
}

void last(vector<int>& nums, int target, int &ans2) {
    int s = 0, e = nums.size() - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (nums[mid] == target) {
            ans2 = mid;
            s = mid + 1;
        }
        else if (nums[mid] > target) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
}

int countOccurrences(vector<int>& nums, int target) {
    int ans1 = -1, ans2 = -1;

    first(nums, target, ans1);
    last(nums, target, ans2);

    if (ans1 == -1)
        return 0;

    return ans2 - ans1 + 1;
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

    cout << "Total Number of Occurrences: "
         << countOccurrences(nums, target);

    return 0;
}