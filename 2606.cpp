#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int check[101];
int count;
vector<int> arr[101];

void dfs(int cur){
    if(check[cur])
        return;
    check[cur]=1;
    count++;
    for(int i=0;i<arr[cur].size();i++){
        int next=arr[cur][i];
        dfs(next);
    }
}

int main(void){
    int n,v;
    cin>>n>>v;
    for(int i=1;i<=v;i++){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    
    dfs(1);
    cout<<count-1;
    return 0;
}