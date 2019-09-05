#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

struct map{
    int x,y,z;
};

int n,m;
char mapp[1001][1001];
int dist[1001][1001][2];
const int dx[]={-1,0,1,0};
const int dy[]={0,1,0,-1};

int bfs(){
    queue<map> q;
    q.push({0,0,0});
    dist[0][0][0]=1;
    while(!q.empty()){
        int x=q.front().x,y=q.front().y,z=q.front().z;
        q.pop();
        if(x==n-1 && y==m-1)
            return dist[x][y][z];
        for(int i=0;i<4;i++){
            int nx=x+dx[i],ny=y+dy[i];
            if(nx<0||ny<0||nx>=n||ny>=m)
                continue;
            if(dist[nx][ny][z])
                continue;
            if(mapp[nx][ny]=='0'){
                dist[nx][ny][z]=dist[x][y][z]+1;
                q.push({nx,ny,z});
            }
            if(mapp[nx][ny]=='1'&& z==0){
                dist[nx][ny][1]=dist[x][y][z]+1;
                q.push({nx,ny,1});
            }        
        }
    }
    return -1;
}

int main(void){
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>mapp[i];
    cout<<bfs();
    return 0;
}