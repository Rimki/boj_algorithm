#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

struct tomato{
    int x,y,z;
};

int box[101][101][101];
const int dx[]={-1,1,0,0,0,0};
const int dy[]={0,0,-1,1,0,0};
const int dz[]={0,0,0,0,-1,1};
queue<tomato> q;
int m,n,h,ans;

void bfs(){
    while(!q.empty()){
        int x=q.front().x,y=q.front().y,z=q.front().z;
        q.pop();

        for(int i=0;i<6;i++){
            int nx=x+dx[i],ny=y+dy[i],nz=z+dz[i];
            if(nx<0||nx>=h||ny<0||ny>=n||nz<0||nz>=m)
            continue;
            if(box[nx][ny][nz])
            continue;
            box[nx][ny][nz]=box[x][y][z]+1;
            q.push({nx,ny,nz});
            
        }
    }
}

int main(void){
    cin>>m>>n>>h;
    for(int i=0;i<h;i++)
    for(int j=0;j<n;j++)
    for(int k=0;k<m;k++){
        cin>>box[i][j][k];
        if(box[i][j][k]==1)
            q.push({i,j,k});
    }
    bfs();
    for(int i=0;i<h;i++)
    for(int j=0;j<n;j++)
    for(int k=0;k<m;k++){
        if(box[i][j][k]==0){
            cout<<-1;
            return 0;
        }
        if(ans<box[i][j][k])
        ans=box[i][j][k];
    }
    cout<<ans-1;
    return 0;   
}