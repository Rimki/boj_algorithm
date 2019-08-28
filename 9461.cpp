#include<iostream>
#include<cstdio>
using namespace std;

long long P[100];

void spiral(){
    P[0]=0;
    P[1]=1;
    P[2]=1;
    P[3]=1;
    P[4]=2;
    for(int i=5;i<=100;i++){
        P[i]=P[i-1]+P[i-5];
    }
    return;
}

int main(void){
    int T;
    cin>>T;
    cin.tie(NULL);
    spiral();
   while(T--){
        int N;
        cin>>N;
        cout<<P[N]<<'\n';
    }
}