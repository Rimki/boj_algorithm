#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    int T,m,n,x,y;
    cin>>T;
    while(T--){
        cin>>m>>n>>x>>y;
        int max=m*n;
        int result=-1;
        int k=0;
        if(y==n)y=0;
        while(1){
            if(m*k+x>max)
               break;
           if((m*k+x)%n==y){
               result=m*k+x;
               break;
           }
            k++;
        }
        cout<<result<<endl;
    }
}