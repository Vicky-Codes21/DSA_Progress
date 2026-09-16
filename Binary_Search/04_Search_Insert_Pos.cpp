#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        int searchinsert(vector<int>&nums,int target){
            int n=nums.size();
            int st=0,end=n-1;
            while(st<=end){
                int mid=st+(end-st)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]<target){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            return st;
        }

};
int main(){
    vector<int>ans={1,2,3,4,5,6,7,8};
    int target=7;
    solution obj;
    int value=obj.searchinsert(ans,target);
    cout<<"The index is : "<<value;
    return 0;
}