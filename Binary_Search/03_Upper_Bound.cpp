#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lowerBound(vector<int>& nums, int x) {

        //The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key i.e. x.
        //The upper bound is the smallest index, ind, where arr[ind] > x.
      
        int n = nums.size();
        int st = 0;
        int end = n - 1;
        int ans = n;

        while(st <= end) {
            int mid = st + (end - st) / 2;

            if(nums[mid] > x) {
                ans = mid;      // possible answer
                end = mid - 1;  // search for an earlier answer
            }
            else {
                st = mid + 1;   // search right
            }
        }

        return ans;
    }
};

int main() {
    vector<int> ans = {1,2,3,4,5,6,7,8};
    int x = 6;

    Solution obj;
    int value = obj.lowerBound(ans, x);

    cout << "Index is : " << value;

    return 0;
}