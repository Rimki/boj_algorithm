#include<iostream>
#include<cstdio>
using namespace std;

const int MAX=1000000;
int dp[MAX+1];
int main(void){
    int N;
    cin>>N;
    
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=N;i++){
        dp[i]=(dp[i-1]+dp[i-2])%15746;
    }
    cout<<dp[N]%15746;
  
    return 0;
}