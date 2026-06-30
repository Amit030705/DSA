#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMin(vector<int>& nums) {
    int n = nums.size();
    int l = 0, r = n - 1;
    int ans = INT_MAX;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (nums[l] <= nums[mid]) {
            ans = min(ans, nums[l]);
            l = mid + 1;
        } else {
            ans = min(ans, nums[mid]);
            r = mid - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    cout << "Minimum element = " << findMin(nums) << endl;

    return 0;
}