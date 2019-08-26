#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
     int a,b,c,d,e,f;
     cin>>a>>b>>c>>d>>e>>f;
     int x,y;
     if(a==c)
     x=e;
     else if(a==e)
     x=c;
     else
     x=a;

     if(b==d)
     y=f;
     else if(b==f)
     y=d;
     else
     y=b;
     
     cout<<x<<" "<<y;
     return 0;
}