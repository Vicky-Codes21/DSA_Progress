#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        int maxproduct(vector<int>&nums){
            int n=nums.size();
            int prdt=nums[0];
            int x1=nums[0];
            int x2=nums[0];
            for(int i=0;i<n;i++){
                if(nums[i]<0){
                    swap(x1,x2);
                }
                x1=max(nums[i],x1*nums[i]);
                x2=min(nums[i],x2*nums[i]);
                prdt=max(prdt,x1);
            }
            return prdt;
        }
};
int main() {

    // Create input array
    vector<int> nums = {2, 3, -2, 4};

    // Create object of Solution class
    solution obj;

    // Call maxProduct()
    int answer = obj.maxproduct(nums);

    // Print answer
    cout << "Maximum product = " << answer << endl;

    return 0;
}