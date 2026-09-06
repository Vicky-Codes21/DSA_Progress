#include<bits/stdc++.h>
using namespace std;
class SetMatrixZero{
    public:
    void setzeroes(vector<vector<int>>&matrix){
        int m=matrix.size();
        int n=matrix[0].size();
        bool Firstcoloumnzero=false;
        bool Firstrowzero=false;
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){
                Firstcoloumnzero=true;
                break;
            }
        }
        for(int j=0;j<n;j++){
            if(matrix[0][j]==0){
                Firstrowzero=true;
                break;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(Firstcoloumnzero){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
         if(Firstrowzero){
            for(int j=0;j<n;j++){
                matrix[0][j]=0;
            }
        }
    }
};
int main(){
    SetMatrixZero obj;
    vector<vector<int>>matrix= {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    obj.setzeroes(matrix);
    for(auto row : matrix){
        for(auto val : row){
            cout<<val<< " ";
        }
        cout<<endl;
    }
    return 0;
    
}