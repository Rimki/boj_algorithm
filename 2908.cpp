#include<iostream>
#include<cstdio>
using namespace std;

int reverse(int n){
    int a,b,c;
    a=n%10;
    b=(n/10)%10;
    c=(n/10)/10;
    return 100*a+10*b+c;
}

int main(void){
    int A,B;
    cin>>A>>B;
    if(reverse(A)>reverse(B))
        cout<<reverse(A);
    else
        cout<<reverse(B);
    return 0;
}