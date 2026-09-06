#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<"Enter number of row : ";
    cin>>n;
    for(int i=n;i>=1;i--){       
                                     /*for(int i=0;i<n;i++){
                                           for(char ch='E'-i;ch<='E';ch++){
                                              cout<ch<<" ";
                                           }
                                        }*/
        for(int j=i;j<=n;j++){
            cout<<char(64+j);
        }
        cout<<endl;
    }
    return 0;
}