#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    int N,max=0;
    cin>>N;
    int list[1002],dp[1002];
    for(int i=1;i<=N;i++)
    cin>>list[i];
    for(int i=1;i<=N;i++){
        dp[i]=1;
        for(int j=1;j<i;j++){
            if(list[i]>list[j]&&dp[i]<dp[j]+1)
                dp[i]=dp[j]+1;
        }
    }
    for(int i=1;i<=N;i++){
        if(max<dp[i])
        max=dp[i];
    }
    cout<<max;
    return 0;

}