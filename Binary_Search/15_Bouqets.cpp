#include<bits/stdc++.h>
using namespace std ;
class solution{
    public:
        bool possible(vector<int>&bloomday,int m,int k,int day){
            int flowers=0;
            int bouquets=0;
            for(int bloom : bloomday){
                if(bloom<=day){
                    flowers++;
                    if(flowers==k){
                        bouquets++;
                        flowers=0;
                    }
                }
                else{
                    flowers=0;
                }
            }
            return bouquets>=m;
        }
        int minDays(vector<int>&bloomday,int m,int k){
            long long required=1LL*m*k;
            if(required>bloomday.size()){
                return -1;
            }
            int low=*min_element(bloomday.begin(),bloomday.end());
            int high=*max_element(bloomday.begin(),bloomday.end());
            while(low<=high){
                int mid=low+(high-low)/2;
                if(possible(bloomday,m,k,mid)){
                    high =mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            return low;
        }
};
int main(){
    vector<int>bloomday={7,7,7,7,12,7,7};
    int m=2,k=3;
    solution obj;
    int ans=obj.minDays(bloomday,m,k);
    cout<<"Minimum Days are : "<<ans;
    return 0;
}