#include<iostream>
#include<cstdio>
using namespace std;

int coin[11];

int main(void){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    cin>>coin[i];

    int result = 0;
    for(int i=1;i<=n;i++){
        result+=k/coin[n-i];
        k%=coin[n-i];
        if(k==0)
            break;
    }

    cout<<result;
    return 0;    
}