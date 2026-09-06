#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int num){
    int i;
    for(i=0;i<n;i++){
        if (arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter number to search : ";
    cin>>num;
    int value=search(arr,n,num);
    cout<<"The number is at the index of : "<<value;
    return 0;
}