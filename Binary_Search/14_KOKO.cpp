#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            
            long long mid = low + (high - low) / 2;
            
            long long hours = 0;

            for (int pile : piles) {
                hours += (pile + mid - 1) / mid;
            }

            if (hours <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};
int main(){
    vector<int>piles={3,6,7,11};
    int h=8;
    Solution obj;
    int ans=obj.minEatingSpeed(piles,h);
    cout<<"MIN SPEED : "<<ans;
    return 0;
}