#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,m,k;
    cin>>n>>m>>k;
    cout<<min(min(n/2,m),(n+m-k)/3);
}