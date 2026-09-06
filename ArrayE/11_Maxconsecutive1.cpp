#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[]={1,1,1,1,0,0,1,1 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int high=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count>high){
                high=count;
            }
        }
        else{
            count=0;
        }
    }
    cout<<"The consecutive ones are : "<<high;
    return 0;
}