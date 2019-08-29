#include<iostream>
#include<cstdio>
using namespace std;

long long mod = 1000000000;
long long ans = 0;
int pos[101][11];

int main(void){
    int N;
    cin>>N;
    for(int i=1;i<10;i++)
    pos[1][i]=1;
    for(int i=2;i<=N;i++){
        for(int j=0;j<10;j++){
            pos[i][j]=(pos[i-1][j-1]+pos[i-1][j+1])%mod;
        }
    }
    for(int i=0;i<10;i++)
    ans+=pos[N][i];
    cout<<ans%mod;
    return 0;
}