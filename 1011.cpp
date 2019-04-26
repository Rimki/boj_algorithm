#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(void){
    int T;
    
    cin>>T;
  while(T--){
        int s,e;
        cin>>s>>e;
        long long j=1,d=e-s;
        while(j*j<=d)
        j++;
        j--;
        d=ceil((double)(d-j*j)/j);

        cout<<2*j-1+d<<endl;

    }
    return 0;
}