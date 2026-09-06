#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of row : ";
    cin>>n;
    int space1=0;
    for(int i=0; i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<space1;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        space1+=2;
        cout<<endl;
    }
    int space2=2*n-2;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        for(int j=space2;j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        space2=space2-2;
        cout<<endl;
    }
    return 0;
}
