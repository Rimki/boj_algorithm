#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n;
    cin>>n;
    cout<<((n/5)+(n/25)+(n/125));
    return 0;
}