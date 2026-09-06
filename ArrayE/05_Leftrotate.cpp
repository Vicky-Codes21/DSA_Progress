#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;

    cout<<"Enter number of steps to move : ";
    cin>>k;
 
    cout<<"Enter Number of Elements : ";
    cin>>n;                                 
    if(n == 0){
        return 0;
    }
    k=k%n;

    int arr[n];

    cout<<"Enter elements : ";

    //Enter elements

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int temp[n];
    
    for(int i=0;i<n;i++){
        if(i<k){
            temp[n-k+i]=arr[i];
        }
        else{
            temp[i-k]=arr[i];
        }
    }
    
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }

    cout<<"Rotated array is : ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}