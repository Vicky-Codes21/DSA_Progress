#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        vector<vector<int>> generate (int numRows){
            int n=numRows;
            vector<vector<int>>ans;
            for(int i=0;i<n;i++){
                vector<int>row(i+1,1);
                for(int j=1;j<i;j++){
                    row[j]=ans[i-1][j-1]+ans[i-1][j];
                }
                ans.push_back(row);
            }
            return ans;
        }
};
int main(){
    int numRows;
    cout<<"Enter number of rows : ";
    cin>>numRows;
    solution obj;
    vector<vector<int>> ans=obj.generate(numRows);
    for(auto row:ans){
        for(auto val : row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}