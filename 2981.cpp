#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int num[101];

int gcd(int x,int y){
    if(y==0)
    return x;
    return gcd(y,x%y);
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int N,g;
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>num[i];
    sort(num,num+N);
    g=num[1]-num[0];
    for(int i=1;i<N-1;i++)
        g=gcd(g,num[i+1]-num[i]);

    vector<int> ans;
    for(int i=1;i*i<=g;i++){
        if(!(g%i)){
            ans.push_back(i);
            if(i!=g/i)
                ans.push_back(g/i);
        }
    }
    sort(ans.begin(),ans.end());

    for(int& a:ans)
    if(a!=1)
        printf("%d ",a);
    return 0;
}