#include<bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target,int nums[] , int n){
    int i = 0 , j = 0;
    int sum = 0;
    int mini = INT_MAX;
    while(j<n){
        sum+=nums[j];
        while(sum>=target){
            mini=min(mini,j-i+1);
            sum-=nums[i];
            i++;
        }
        j++;

    }
    return (mini == INT_MAX) ? 0 : mini;
}

int main(){
    int nums[6] = {2,3,1,2,4,3};
    int n = 6;
    int target;
    cout<<"Enter target: ";
    cin>>target;

    cout<<minSubArrayLen(target,nums,n);

    return 0;
}