#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

const int dx[] = {0,0,-1,1};
const int dy[] = {-1,1,0,0};
int n, k, cnt[26 * 26];
char arr[26][26];

void dfs(int x,int y){
    arr[x][y]='0',cnt[k]++;
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(arr[nx][ny]=='1')
        dfs(nx,ny);
    }
}
int main(void){
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>arr[i]+1;

    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    if(arr[i][j]=='1')
    dfs(i,j),k++;

    sort(cnt,cnt+k);
    cout<<k<<endl;

    for(int i=0;i<k;i++)
    cout<<cnt[i]<<endl;

    return 0;
  
}