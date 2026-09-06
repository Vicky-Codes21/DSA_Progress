#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int size=n-1;
    
    int arr[size];
    cout<<"Enter elements : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    int count=0;
    for(int i=0;i<size;i++){
        count=count+arr[i];
    }
    cout<<"The missing element is : "<<(sum-count);
    return 0;
}