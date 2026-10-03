#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        int search(vector<int>&nums,int target,int n){
            
            int low=0;
            int high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]==target){
                    return mid;
                }
                if(nums[low]<=nums[mid]){
                    if(nums[low]<=target&&target<nums[mid]){
                        high=mid-1;
                    }
                    else{
                        low=mid+1;
                    }
                }
                else{
                    if(nums[mid]<target&&target<=nums[high]){
                        low=mid+1;
                    }
                    else{
                        high=mid-1;
                    }
                }
            }
            return -1;
    
        }
};
int main(){
    int n = 7;
    vector<int> array = {4,5,6,7,0,1,2};
    int x = 0;
    solution obj;

    int ans = obj.search(array, x, n);

    cout << "INDEX : " << ans;

    return 0;
}