#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        int low = 0;
        int high = n - 1;
        int ans=n;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid]>nums[high]) {
                low=mid+1;
            }
            else {
                high = mid;
            }
        }

        return nums[low];
    }
};
int main(){
    
    vector<int> array = {4,5,6,7,0,1,2};
    
    Solution obj;

    int ans = obj.findMin(array);

    cout << "MIN ELEMENT : " << ans;

    return 0;
}