#include<iostream>
#include<cstdio>
#include<string.h>
#define MAX 10000
using namespace std;

bool isPrime[MAX];

void part(int n){
    int pair=0;
    for(int base=n/2;base<n;base++){
        pair=n-base;
        if(isPrime[pair]&&isPrime[base]){
            cout<<pair<<" "<<base<<'\n';
            return ;
        }
    }
} 

void eratosthenes() {
    memset(isPrime, 1, sizeof(bool) * MAX);
    for (int i=2; i<=MAX; i++) {
        if (isPrime[i]) {
            for (int j=i*2; j<=MAX; j+=i) {
                isPrime[j] = 0;
            }
        }
    }
} 

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin>>n;
    eratosthenes();
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        part(num);

    }

    return 0;
}
 
 
 
 