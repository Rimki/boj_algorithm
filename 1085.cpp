#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(void){
    int x,y,w,h;
    cin>>x>>y>>w>>h;
    
   int m=1001; 
    m=min(min(x,w-x),min(y,h-y));
    cout<<m;
    return 0;
}