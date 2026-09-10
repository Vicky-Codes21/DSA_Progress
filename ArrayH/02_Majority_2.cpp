#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int> majorityelements(vector<int>&nums){
        int cnt1=0,cnt2=0;
        int el1=INT_MIN,el2=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(cnt1==0&&el2!=nums[i]){
                cnt1=1;
                el1=nums[i];
            }
            else if(cnt2==0&&el1!=nums[i]){
                cnt2=1;
                el2=nums[i];
            }
            else if(nums[i]==el1){
                cnt1++;
            }
            else if(nums[i]==el2){
                cnt2++;
            }
            else{
                cnt1--,cnt2--;
            }
        }
        vector<int>ls;
        cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el1){
                cnt1++;
            }
            else if(nums[i]==el2){
                cnt2++;
            }
        }
        if(cnt1>n/3){
            ls.push_back(el1);
        }
        if(cnt2>n/3){
            ls.push_back(el2);
        }
        return ls;
    }
};
int main (){
    vector<int>arr={1,1,1,1,2,2,2,3,3,3,3};
    solution sol;
    vector<int>ans=sol.majorityelements(arr);
    cout<<"The majority elements are : ";
    for(auto it : ans){
        cout<<it<< " ";
    }
    cout<<endl;

    return 0 ;
}