#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int count=0;
        vector<int>prefixsum(n,0);
        prefixsum[0]=arr[0];
        for(int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1]+arr[i];
        }
        unordered_map<int,int>m;
        for(int j=0;j<n;j++){
            if(prefixsum[j]==k){
                count++;
            }
            int val=prefixsum[j]-k;
            if(m.find(val)!=m.end()){
                count+=m[val];
            }
            m[prefixsum[j]]++;
        }
        return count;
    }
};
int main(){
    vector<int>array={1,2,3,4,5};
    int k;
    cout<<"Enter target sum : ";
    cin>>k;
    Solution obj;
    int x=obj.subarraySum(array,k);
    cout<<x;
    return 0;

}