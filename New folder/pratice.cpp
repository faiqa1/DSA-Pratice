#include<bits/stdc++.h>
using namespace std;
int maxpath(vector<vector<int>>& grid){
    int N = grid.size();
    int M = grid[0].size();

    vector<vector<int>> sum;
    sum.resize(N+1, vector<int>  (M+1));
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            sum[i][j]= max(sum[i-1][j],
            sum[i][j-1]+
            grid[i-1][j-1]);
        }
    }
    return sum[N][M];
}
int main(){
    vector<vector<int>> grid =
    { {1,2},{3,5} };
    cout<<maxpath(grid);

}