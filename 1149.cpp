#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;


int dp[1000][3];


int main(void){
    int N,r,g,b;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>r>>g>>b;
        dp[i][0]=min(dp[i-1][1],dp[i-1][2])+r;
        dp[i][1]=min(dp[i-1][0],dp[i-1][2])+g;
        dp[i][2]=min(dp[i-1][0],dp[i-1][1])+b;
    }
    cout<<min(dp[N][0],min(dp[N][1],dp[N][2]));
    return 0;
}