#include<iostream>
#include<cstdio>
using namespace std;

int c[1001][1001];

int f(int n,int k){
    if(c[n][k]) return c[n][k];
    if(n==k||k==0) return 1;
    return c[n][k]=(f(n-1,k)+f(n-1,k-1))%10007;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

   int n,k;
   cin>>n>>k;
   cout<<f(n,k);
    return 0;
}