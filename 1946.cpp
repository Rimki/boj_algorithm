#include<bits/stdc++.h>
using namespace std;

int main(void){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        int cnt=1;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end());
        int best=v[0].second;

        for(int i=1;i<n;i++){
            if(v[i].second<best){
                cnt++;
                best=v[i].second;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}