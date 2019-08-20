#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    int H,M;
    cin>>H>>M;
    if(M<45){
        if(H==0)
        H=23;
        else
        H=H-1;
        M=M+15;
    }
    else
    M=M-45;

    cout<<H<<" "<<M;
    
    
}