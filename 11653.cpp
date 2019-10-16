#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int N;
    cin>>N;

    for(int i=2;i<10000000||N!=1;i++){
        while(N%i==0){
            printf("%d\n",i);
            N=N/i;
        }
    }
    return 0;
}