#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        for (auto& pair : mp) {
            if (pair.second > n / 2) {
                return pair.first;
            }
        }

        return -1;
    }
};

int main() {
     int n;
    cout<<"Enter number of element : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution sol;

    int ans = sol.majorityElement(arr);

    cout << "The majority element is: " << ans << endl;

    return 0;
}