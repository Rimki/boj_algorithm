#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;

vector<vector<int>>vec;
queue<int> q;
int check[1001];

void dfs(int now){
    check[now]=1;
    cout<<now<<" ";
    for(int i=0;i<vec[now].size();i++){
        int next=vec[now][i];
        if(check[next]==0)
        dfs(next);
    }
}

void bfs(int now){
    q.push(now);
    check[now]=1;
    while(!q.empty()){
        now=q.front();
        q.pop();
        cout<<now<<" ";
        for(int i=0;i<vec[now].size();i++){
            int next=vec[now][i];
            if(check[next]==0){
                q.push(next);
                check[next]=1;
            }
        }
    }
}
int main(void){
    int n,m,v;
    cin>>n>>m>>v;
    vec.resize(n+1);
    for(int i=0;i<m;i++){
        int u,w;
        cin>>u>>w;
        vec[u].push_back(w);
        vec[w].push_back(u);
    }
    for(int i=1;i<=n;i++)
    sort(vec[i].begin(),vec[i].end());

    dfs(v);
    puts("");
    memset(check,0,sizeof(check));
    bfs(v);
    return 0;
}