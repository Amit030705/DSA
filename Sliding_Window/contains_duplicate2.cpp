#include<bits/stdc++.h>
using namespace std;

 bool containsNearbyDuplicate(int nums[], int k , int n) {
        set<int>s;
        int i = 0 , j = 0;
        while(j<n){
            if(s.count(nums[j])){
                return true;
            }
            while(j-i>k){
                s.erase(nums[i]);
                i++;
            }
            s.insert(nums[j]);
            j++;
        }
        return false;
}

int main(){

    int nums[4] = {1,2,3,1};
    int n = 4;
    int k;
    cout<<"Enter k: ";
    cin>>k;

    bool ans = containsNearbyDuplicate(nums,k,n);

    if(ans){
        cout<<"Founded!!";
    }else{
        cout<<"Not Founded!!";
    }

    return 0;
}