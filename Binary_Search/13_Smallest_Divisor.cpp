#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int sum = 0;

            for (int i = 0; i < nums.size(); i++) {
                sum += (nums[i] + mid - 1) / mid;
            }

            if (sum <= threshold) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
int main(){
    vector<int>nums={1,2,5,9};
    int x=6;
    Solution obj;
    int ans =obj.smallestDivisor(nums,x);
    cout<<"Divisor : "<<ans;
    return 0;
}