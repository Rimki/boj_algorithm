#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    int n;
    int a=1,b=1,cnt=0,m=1;
    cin>>n;
    while(1){
        if(m%2==0)
        a=1,b=m;
        else
        a=m,b=1;

        for(int i=0;i<m;i++){
            if(++cnt==n){
                cout<<a<<"/"<<b;
                return 0;
            }
            if(m%2==0)
            ++a,--b;
            else
            --a,++b;
            
        }
        m++;
    }
}