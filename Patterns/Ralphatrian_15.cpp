#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of rows or height of the triangle : ";
    cin>>n;
    for(int i=n-1;i>=0;i--){
        for(char j='A';j<=('A'+i);j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
