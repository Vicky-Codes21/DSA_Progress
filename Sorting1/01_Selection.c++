#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[]={6,8,4,0,2,1,3,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}