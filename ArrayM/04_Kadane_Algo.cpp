//OPTIMAL APPROACH
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
    int maxi=arr[0];
    int sum=0;
    for (int i=0;i<n;i++){
        sum=sum+arr[i];
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;
    return 0;
}

//BRUTE FORCE

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
    int maxi=arr[0];
    for (int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){

            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
            }
            maxi=max(maxi,sum);
        }
    }
    cout<<maxi;
    return 0;
}

//BETTER APPROACH
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
    int maxi=arr[0];
    for (int i=0;i<n;i++){
        
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(maxi,sum);
        }
    }
    cout<<maxi;
    return 0;
}
