#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of row : ";
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i-1)/2;
        for(int j=1;j<=2*i-1;j++){
            cout<<ch;
            if(j<=breakpoint)ch++;
            else ch--;
        }
        cout<<endl;
    }
    return 0;
}
