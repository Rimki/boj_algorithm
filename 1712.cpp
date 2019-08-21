#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    long long A,B,C;
    cin>>A>>B>>C;
    if(B>=C){
        cout<<-1;
        return 0;
    }
    long long ans;
    ans=A/(C-B)+1;
    cout<<ans;
    return 0;
          

}