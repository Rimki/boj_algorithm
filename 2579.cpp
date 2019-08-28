#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(void){
    int N;
    int stair[301]={0,};
    int dp[301]={0,};
    cin>>N;
    for(int i=1;i<=N;i++)
        cin>>stair[i];
    dp[1]=stair[1];
    dp[2]=max(dp[1]+stair[2],stair[2]);
    for(int i=3;i<=N;i++){
        dp[i]=max(stair[i-1]+dp[i-3],dp[i-2])+stair[i];
    }

    cout<<dp[N];
    return 0;
}