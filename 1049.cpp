#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,m,a,b,ans=0;
    int amin,bmin=1000;

    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        amin=min(amin,a);
        bmin=min(bmin,b);
    }

    if(amin>6*bmin)
        amin=6*bmin;
    
    if((n%6)*bmin>amin)
        cout<<(n/6)*amin+amin;
    else
        cout<<(n/6)*amin+(n%6)*bmin;
    return 0;
}