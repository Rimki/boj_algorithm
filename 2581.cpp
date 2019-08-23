#include<iostream>
#include<cstdio>

using namespace std;
bool isPrime(int n){
    if(n==1)
    return false;
    for(int j=2;j*j<=n;j++){
        if(n%j==0)
        return false;

    }
    return true;
}
int main(void){
    int M,N;
    cin>>M>>N;

    int min=10001;
    int sum=0;
    for(int i=M;i<=N;i++){
        if(isPrime(i)){
            sum+=i;
            if(min>i)
            min=i;
        }
    }
    if(!sum)
        cout<<-1;
    else
    cout<<sum<<endl<<min;

    return 0;
}