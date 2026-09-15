#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        int searchtarget(vector<int>&nums , int target){
            int n=nums.size();
            int st=0;
            int end=n-1;
            while(st<=end){
                int mid=st+(end-st)/2;
                if(target==nums[mid]){
                    return mid;
                }
                else if(nums[mid]<target){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            return -1;
        }
};
int main(){
    vector<int>ans={1,2,3,4,5,6,7,8,9};
    int target=6;
    solution obj;
    int k=obj.searchtarget(ans,target);
    cout << "Index = " << k << endl;
    return 0;
}