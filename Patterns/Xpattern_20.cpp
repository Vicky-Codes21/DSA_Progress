#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int space1=2*n-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=space1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        space1=space1-2;
        cout<<endl;
    }
    int space2=2;
    for(int i=0;i<n-1;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<"*";
        }
        for(int j=0;j<space2;j++){
            cout<<" ";
        }
        for(int j=n-i-1;j>0;j--){
            cout<<"*";
        }
        space2+=2;
        cout<<endl;
    }
    return 0;
}