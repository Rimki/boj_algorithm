#include<iostream>
#include<cstdio>

using namespace std;

int main(void){
    while(1){
        int x,y,z;
        cin>>x>>y>>z;
        if(x==0&&y==0&&z==0)
        break;
        if(x>y)
        swap(x,y);
        if(y>z)
        swap(y,z);
        if(x*x+y*y==z*z)
        cout<<"right"<<endl;
        else
        cout<<"wrong"<<endl;
        
    }
    return 0;
}