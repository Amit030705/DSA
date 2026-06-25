#include<bits/stdc++.h>
using namespace std;
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0 , j = 0 , prod = 1;
        int result = 0;
        while(j<n){
            prod*=nums[j];
            while(prod>=k){
                prod/=nums[i];
                i++;
            }
            result+=j-i+1;
            j++;

        }
        return result;
}
int main(){
    vector<int>nums{10,5,2,6};
    int k;
    cout<<"Enter k: ";
    cin>>k;

    cout<<numSubarrayProductLessThanK(nums,k);
   
    return 0;
}