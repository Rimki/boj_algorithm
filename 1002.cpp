#include<iostream>
#include<cstdio>
using namespace std;

int x1,x2,y1,y2,r1,r2;
int dist(){
    return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}
int sq(int x){
    return x*x;
}
int main(void){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>x1>>y1>>r1>>x2>>y2>>r2;

        if(r1==r2 && x1==x2 && y1==y2)
            cout<<-1;
        else if(dist()>sq(r1+r2))
            cout<<0;
        else if(dist()==sq(r1+r2))
            cout<<1;
        else if(dist()<sq(r1+r2)){
            if(dist()>sq(r2-r1))
                cout<<2;
            else if(dist()==sq(r2-r1))
                cout<<1;
            else if(dist()<sq(r2-r1))
                cout<<0;
        }
        cout<<'\n';
    }
}