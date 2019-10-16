#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n,k,a=1,b=1;
    cin>>n>>k;
    int K=k;
    for(int i=0;i<K;i++){
        a=n*a;
        n--;
        b=k*b;
        k--;
    }
    cout<<a/b;
    return 0;
}