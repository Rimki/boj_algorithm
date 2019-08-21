#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    long long A,B,V;
    cin>>A>>B>>V;
    long long ans=0;
    ans=(V-B-1)/(A-B)+1;
    cout<<ans;
    return 0;
}