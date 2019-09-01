#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int matrix[501][2];
int dp[501][501];

int main(void){
     int N;
     cin>>N;

     for(int i=1;i<=N;i++)
        cin>>matrix[i][0]>>matrix[i][1];

     for(int i=N;i>0;i--){
         for(int j=i+1;j<=N;j++){
             dp[i][j]=0x7fffffff;
            for(int k=i;k<j;k++)
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+(matrix[i][0]*matrix[k][1]*matrix[j][1]));

         }
     }
     cout<<dp[1][N];
     return 0;   
}