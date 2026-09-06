#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of Elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    //Enter elements
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int SecondLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            SecondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>SecondLargest && arr[i]!=largest){
            SecondLargest=arr[i];
        }
    }
    if(SecondLargest==INT_MIN){
        cout<<"No 2nd largest";
    }
    else{
        cout<<"Second largest is : "<<SecondLargest;
    }
    return 0;
}