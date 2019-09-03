#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int p[1001];

int main(void){
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    cin>>p[i];

    sort(p,p+N);
    int sum=0;
    for(int i=0;i<N;i++)
        sum+=p[i]*(N-i);
    
    cout<<sum;
    return 0;
    
}