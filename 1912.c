#include<stdio.h>
#define max(a,b) (a)>(b)? (a):(b)
int main(){
    int n,ans;
    int num[100000]={0,};
    int dp[100000]={0,};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
   dp[0]=num[0];
   ans=dp[0];
   for(int i=1;i<n;i++)
   dp[i]=max(dp[i-1]+num[i],num[i]);
   for(int i=0;i<n;i++)
   ans=max(ans,dp[i]);
   printf("%d",ans);
}