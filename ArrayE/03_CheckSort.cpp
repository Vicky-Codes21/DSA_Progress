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
    bool sorted = true;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if(sorted)
        cout << "Sorted";
    else
        cout << "Not Sorted";
    return 0;
}    