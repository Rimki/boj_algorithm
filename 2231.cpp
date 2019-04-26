#include<iostream>
using namespace std;

int sum(int n){
    if(n==0)
        return 0;
    return n%10+sum(n/10);
}



int main(void){
    int N;
    cin>>N;
    for(int i=1;i<N;i++){
        if(i+sum(i)==N){
            cout<<i;
            return 0;
        }

    }
    cout<<0;
    return 0;
}