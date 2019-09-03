#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

bool desc(int a,int b){
    return a>b;
}

int rope[100001];

int main(void){
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    cin>>rope[i];

    sort(rope,rope+N,desc);

    long long ans=0;
    for(int i=0;i<N;i++){
        long long sum=rope[i]*(i+1);
        if(sum>ans)
            ans=sum;
    }
    cout<<ans;
    return 0;
}