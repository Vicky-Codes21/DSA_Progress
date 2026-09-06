#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of rows or height of the triangle : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int value=i%2;
        for(int j=1;j<=i;j++){
            cout<<value<<" ";
            value=1-value;
        }
        cout<<endl;
    }
    return 0;
}
