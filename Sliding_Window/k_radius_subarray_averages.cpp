#include<bits/stdc++.h>
using namespace std;

void getAverages(int nums[], int n, int k, vector<int>& result)
{
    if(k==0)
    {
        for(int i=0;i<n;i++)
            result[i]=nums[i];
        return;
    }

    if(n < 2*k+1)
        return;

    vector<long long> prefix(n);

    prefix[0]=nums[0];

    for(int i=1;i<n;i++)
        prefix[i]=prefix[i-1]+nums[i];

    for(int i=k;i<=n-k-1;i++)
    {
        long long sum=prefix[i+k];

        if(i-k>0)
            sum-=prefix[i-k-1];

        result[i]=sum/(2*k+1);
    }
}

int main()
{
    int nums[]={7,4,3,9,1,8,5,2,6};
    int n=9;

    int k;
    cout<<"Enter k: ";
    cin>>k;

    vector<int> result(n,-1);

    getAverages(nums,n,k,result);

    for(int x:result)
        cout<<x<<" ";

    return 0;
}