#include<bits/stdc++.h>
using namespace std;

int coin[6] = {1,5,10,50,100,500};

int main(void){
    int n;
    cin>>n;
    int k=1000-n;
    int cnt=0;
    for(int i=5;i>=0;i--){
        if(k/coin[i]>0){
            cnt+=k/coin[i];
            k=k%coin[i];
        }
    }
    cout<<cnt;
}