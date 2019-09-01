#include<iostream>
#include<cstdio>
using namespace std;

const int dx[]={0,1,0,-1};
const int dy[]={1,0,-1,0};

int N,M,map[501][501],dp[501][501];

int dfs(int x,int y){
    if(x==N && y==M)
        return 1;
    if(dp[x][y]!=-1)
        return dp[x][y];
     dp[x][y]=0;   
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(map[nx][ny]&&map[nx][ny]<map[x][y])
            dp[x][y]+=dfs(nx,ny);
    }
    return dp[x][y];
}

int main(void){
    cin>>N>>M;
    for(int i=1;i<=N;i++)
    for(int j=1;j<=M;j++){
    cin>>map[i][j];
    dp[i][j]=-1;
    }

    cout<<dfs(1,1);
    return 0;
}