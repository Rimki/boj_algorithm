#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

pair<int,int> p[100000];

bool cmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first!=p2.first){
        return p1.first<p2.first;
    }
    return p1.second<p2.second;
}

int main(void){
    int n,x,y;
    cin>>n;

    for(int i=0;i<n;i++){
    cin>>x>>y;
    p[i]={x,y};
    }

    sort(p,p+n,cmp);

    for(int i=0;i<n;i++){
        printf("%d %d\n",p[i].first,p[i].second);
    }
}