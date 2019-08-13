#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    int T;
    cin>>T;
    while(T--){
        int h,w,n;
        cin>>h>>w>>n;
         if(n%h==0)
         cout<<100*h+(n/h)<<endl;
        else
        cout<<100*(n%h)+(n/h+1)<<endl;
    }
}