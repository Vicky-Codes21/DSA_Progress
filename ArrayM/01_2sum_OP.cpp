#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;

    for(int i = 0; i < nums.size(); i++) {

        int need = target - nums[i];

        if(mp.find(need) != mp.end()) {
            return {mp[need], i};
        }

        mp[nums[i]] = i;
    }

    return {};
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    vector<int> ans = twoSum(nums, target);

    if(!ans.empty()) {
        cout << ans[0] << " " << ans[1];
    }
    else {
        cout << "No pair found";
    }

    return 0;
}