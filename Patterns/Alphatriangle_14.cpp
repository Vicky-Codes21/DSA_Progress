#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of rows or height of the triangle : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(char j='A';j<=('A'+i);j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
