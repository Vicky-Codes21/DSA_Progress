#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;

    cout<<"Enter n : ";
    cin>>n;

    int arr[n-1];

    cout<<"Enter elements : ";

    //Enter elements

    for(int i=0;i<(n-1);i++){
        cin>>arr[i];
    }

    int sum=0;

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }

    int asum=0;

    for(int i=0;i<(n-1);i++){
        asum=asum+arr[i];
    }
    cout<<"Missing element is "<<(sum-asum);
    
    return 0;
}