#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,3,4,2};
    int ans=0;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        ans=ans^arr[i];
    }
    cout<<"The single number is : "<<ans;
    return 0;
}