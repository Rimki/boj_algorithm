#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int map[100][100],n,m;
const int dx[]={-1,1,0,0};
const int dy[]={0,0,1,-1};

void bfs(int x,int y){
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));

    while(!q.empty()){
        x=q.front().first;
        y=q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int nx=x+dx[i],ny=y+dy[i];

            if(nx<0||nx>n-1||ny<0||ny>m-1)
            continue;
            if(map[nx][ny]==1){
            q.push(make_pair(nx,ny));
            map[nx][ny]=map[x][y]+1;
            }
        }
    }
}

int main(void){
    cin>>n>>m;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    scanf("%1d",&map[i][j]);
    map[0][0]=1;
    bfs(0,0);

    cout<<map[n-1][m-1];
    return 0;
}