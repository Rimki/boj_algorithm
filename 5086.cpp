#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    while(1){
        int x,y;
        cin>>x>>y;
        if(x==0 && y==0)
            break;
        if(y%x==0)
            cout<<"factor"<<'\n';
        else if(x%y==0)
            cout<<"multiple"<<'\n';
        else
            cout<<"neither"<<'\n';
    }
    
    return 0;
}