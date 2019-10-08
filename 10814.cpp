#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

bool cmp(const pair<int,string>&p1,const pair<int,string>&p2){
    return p1.first<p2.first;
}

int main(void){
    int n,x,y;
    cin>>n;
    vector<pair<int,string>> v(n);
    for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
    }

    stable_sort(v.begin(),v.end(),cmp);

    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<'\n';
    }
}