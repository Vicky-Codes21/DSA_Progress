#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        int findDays(vector<int>& weights, int cap){
            int days=1;
            int load =0;
            for(int weight : weights){
                if(load+weight>cap){
                    days++;
                    load=weight;
                }
                else{
                    load+=weight;
                }
            }
            return days;
        }
        int shipwithinDays(vector<int>&weights,int days){
            int low=*max_element(weights.begin(),weights.end());
            int high=0;
            for(int x: weights){
                high+=x;
            }
            while(low<=high){
                int mid=low+(high-low)/2;
                int daysNeeded=findDays(weights,mid);
                if(daysNeeded<=days){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            return low;
        }
};
int main(){
    vector<int>weights={1,2,3,4,5,6,7,8,9,10};
    int days=5;
    solution obj;
    int ans=obj.shipwithinDays(weights,days);
    cout<<"Minimum capacity is : "<<ans;
    return 0;
}