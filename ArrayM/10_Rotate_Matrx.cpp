#include<bits/stdc++.h>
using namespace std;
class Rotate90{
    public:
    void rotatematrix(vector<vector<int>>&matrix){
        int n=matrix.size();
        //Transpose of matrix and reverse of of the 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
int main(){
    vector<vector<int>>matrix= {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    Rotate90 obj;
    obj.rotatematrix(matrix);
    for(auto row : matrix){
        for(auto val : row){
            cout<<val<< " ";
        }
        cout<<endl;
    }
    return 0;
}