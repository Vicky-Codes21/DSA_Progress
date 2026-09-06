#include<bits/stdc++.h>
using namespace std;
class ArrayManipulator{
    public:
    vector<int>rearrangebysign(vector<int>&A){
        int n=A.size();
        vector<int>ans(n,0);
        int positiveindex=0;
        int negativeindex=1;
        for(int i=0;i<n;i++){
            if(A[i]>0){
                ans[positiveindex]=A[i];
                positiveindex+=2;
            }
            else if(A[i]<0){
                ans[negativeindex]=A[i];
                negativeindex+=2;
            }
        }
        return ans;
    }

};
int main(){
    vector<int>nums={1,2,-4,-5};
    ArrayManipulator obj;
    vector<int>result=obj.rearrangebysign(nums);
    for(int num : result){
        cout<<num<< " ";
    }
    return 0 ;
}