#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {

            int mid = low + (high - low) / 2;

            // Make mid even
            if (mid % 2 == 1)
                mid--;

            if (nums[mid] == nums[mid + 1]) {
                // Pair is intact → single is on right
                low = mid + 2;
            }
            else {
                // Pair is broken → single is on left/mid
                high = mid;
            }
        }

        return nums[low];
    }
};
int main(){
    
    vector<int> array = {1,1,2,3,3,4,4,8,8};
    
    Solution obj;

    int ans = obj.singleNonDuplicate(array);

    cout << "SINGLE ELEMENT : " << ans;

    return 0;
}