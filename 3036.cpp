#include<iostream>
#include<cstdio>
using namespace std;

int ring[101];

int gcd(int x,int y){
    if(y==0)
    return x;
    return gcd(y,x%y);
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int N;
    cin>>N;

    for(int i=0;i<N;i++)
        cin>>ring[i];
    
    for(int i=1;i<N;i++){
        int g=gcd(ring[0],ring[i]);
        printf("%d/%d\n",ring[0]/g,ring[i]/g);
    }
    return 0;
}