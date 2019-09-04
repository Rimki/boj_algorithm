#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int box[1001][1001];
const int dx[]={-1,0,1,0};
const int dy[]={0,1,0,-1};
queue<pair<int,int>> q;
int m,n,ans;

void bfs(){
    while(!q.empty()){
        int x=q.front().first,y=q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int nx=x+dx[i],ny=y+dy[i];
            if(nx<0||nx>=n||ny<0||ny>=m)
            continue;
            if(box[nx][ny])
            continue;
            box[nx][ny]=box[x][y]+1;
            q.push(make_pair(nx,ny));
            
        }
    }
}

int main(void){
    cin>>m>>n;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        cin>>box[i][j];
        if(box[i][j]==1)
            q.push(make_pair(i,j));
    }
    bfs();
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        if(box[i][j]==0){
            cout<<-1;
            return 0;
        }
        if(ans<box[i][j])
        ans=box[i][j];
    }
    cout<<ans-1;
    return 0;   
}