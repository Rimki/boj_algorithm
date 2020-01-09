#include<bits/stdc++.h>
using namespace std;

int main(void){
    string a,b;
    int cnt=0,ans=INT_MAX;
    cin>>a>>b;

    for(int i=0;i<=b.size()-a.size();i++){
        cnt=0;
        for(int j=0;j<a.size();j++){
            if(a[j]!=b[j+i])
                cnt++;
        }
        ans=min(cnt,ans);
    }
    cout<<ans;
}
