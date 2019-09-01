#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int total[501];
int dp[501][501];

int main(void){
    int T;
    cin>>T;
    for(int m=0;m<T;m++){
        int k;
        cin>>k;
        for(int i=1;i<=k;i++){
            int page;
            cin>>page;
            total[i]=total[i-1]+page;
        }
        for (int i = 1; i <= k; i++) {
			dp[i][i] = 0;
		}
        for(int l=1;l<k;l++){
            for(int i=1;i<=k-l;i++){
                int sum=0;
                int val=99999999;
                for(int j=i;j<=i+l-1;j++)
                    val=min(val,dp[i][j]+dp[j+1][i+l]);
                
                dp[i][i+l]=val+total[i+l]-total[i-1];
            }
        }
        cout<<dp[1][k]<<'\n';
    }
}