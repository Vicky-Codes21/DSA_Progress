#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums,int & n) {
        int count=0;
        int element;
        for(int i=0;i<n;i++){
            if(count==0){
                element=nums[i];
                count=1;
            }
            else if(nums[i]==element){
                count++;
            }
            else{
                count--;
            }
        }
        return element;
    }
};
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution sol;
    int ans=sol.majorityElement(nums,n);
    cout<<"The majorty element is : "<<ans;
    return 0;
}