#include<bits/stdc++.h>
using namespace std;

int maxSubarrayLength(vector<int>& nums, int k)
{
    unordered_map<int,int> m;

    int i = 0;
    int maxi = 0;

    for(int j=0;j<nums.size();j++)
    {
        m[nums[j]]++;

        while(m[nums[j]] > k)
        {
            m[nums[i]]--;
            i++;
        }

        maxi = max(maxi, j-i+1);
    }

    return maxi;
}

int main()
{
    vector<int> nums={1,2,1,2,1,2,1,2};

    int k;
    cout<<"Enter k: ";
    cin>>k;

    cout<<maxSubarrayLength(nums,k);
}