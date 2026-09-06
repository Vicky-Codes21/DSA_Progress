#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of days : ";
    cin>>n;
    int price[n];
    cout<<"Enter prices : ";
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    int Buy=price[0];
    int profit=0;
    for(int i=0;i<n;i++){
        if(price[i]<Buy){
            Buy=price[i];
        }
        int current_profit= price[0];
        current_profit= price[i]-Buy;
        if(current_profit>profit){
            profit=current_profit;
        }
    }
    cout<<"The Maximum Profit is : "<<profit;
    return 0;
}
