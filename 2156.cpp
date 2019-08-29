#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int* list= new int[n];
    int dp[10000];
    for(int i=0;i<n;i++)
    cin>>list[i];
    dp[1]=list[0];
    dp[2]=dp[1]+list[1];
    
    for(int i=3;i<=n;i++){
        dp[i]=max(dp[i-1],max(dp[i-2]+list[i-1],dp[i-3]+list[i-2]+list[i-1]));
    }

    cout<<dp[n];
    delete[] list;
    return 0;
}