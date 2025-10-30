#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        int need = target - nums[i];
        if(mp.count(need)) return {mp[need], i};
        mp[nums[i]] = i;
    }
    return {};
}

int main(){
    vector<int> a={2,7,11,15};
    int t=9;
    auto ans=twoSum(a,t);
    cout<<ans[0]<<" "<<ans[1];
}
