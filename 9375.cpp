#include<iostream>
#include<cstdio>
#include<map>
#include<string>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int t,n;
    cin>>t;

    while(t--){
        map<string,int> m;
        cin>>n;
        while(n--){
            string a,b;
            cin>>a>>b;
            m[b]++;
        }
        int ans=1;
        for(auto it=m.begin();it!=m.end();it++)
        ans*=it->second+1;
        cout<<ans-1<<endl;
    }
    return 0;
}