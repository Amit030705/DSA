#include<bits/stdc++.h>
using namespace std;
int numSubarraysWithSum(vector<int>& nums, int goal) {
    int n = nums.size();
    unordered_map<int,int>m;
    m[0] = 1;
    int result = 0 , sum = 0;
    for(int i=0 ; i<n ; i++){                  
        sum+=nums[i];
        if(m.find(sum-goal)!=m.end()){
            result+=m[sum-goal];
        }
        m[sum]++;
    }
    return result;
}
int main(){
    vector<int>nums{1,0,1,0,1};
    int goal;
    cout<<"Enter goal: ";
    cin>>goal;

    cout<<numSubarraysWithSum(nums,goal);
    return 0;
}