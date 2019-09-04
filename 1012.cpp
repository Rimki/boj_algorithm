#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


const int dx[] = {0,0,-1,1};
const int dy[] = {-1,1,0,0};
int arr[51][51];

void dfs(int x,int y){
    arr[x][y]=0;
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(arr[nx][ny])
        dfs(nx,ny);
    }

}
int main(void){
    int T,m,n,k;
    int ans;
    cin>>T;
    while(T--){
        memset(arr,0,sizeof(arr));
        ans=0;
        cin>>m>>n>>k;

        for(int i=0;i<k;i++){
            int x,y;
            cin>>x>>y;

            arr[++x][++y]=1;
        }

        for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        if(arr[i][j])
        ans++,dfs(i,j);

        cout<<ans<<endl;
    }

    return 0;
}