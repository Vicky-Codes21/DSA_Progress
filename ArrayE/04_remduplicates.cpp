//If array is sorted 
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
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    for(int j=0;j<=i;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}



// //if array is not sorted
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     unordered_set<int> st;

//     for(int i = 0; i < n; i++) {
//         st.insert(arr[i]);
//     }

//     for(int x : st) {
//         cout << x << " ";
//     }

//     return 0;
// }