#include<bits/stdc++.h>
using namespace std;

int maxSubarrayLength(vector<int>& nums, int K)
{
    unordered_map<int,int> m;

    int i = 0;
    int maxi = 0;

    for(int j=0;j<nums.size();j++)
    {
        m[nums[j]]++;

        while(m[nums[j]] > K)
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

    int K;
    cout<<"Enter k: ";
    cin>>k;

    cout<<maxSubarrayLength(nums,K);
}