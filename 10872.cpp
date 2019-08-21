#include<iostream>
#include<cstdio>
using namespace std;

long long int factorial(int n){
if(n<1)
return 1;
else
return factorial(n-1)*n;
}
int main(void){
    int n;
    cin>>n;
    cout<<factorial(n);
}