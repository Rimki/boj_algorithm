#include<iostream>
#include<cstdio>
#include<string.h>
#define MAX 246913
using namespace std;

bool isPrime[MAX];
 
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
    eratosthenes();
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    while(1){
        int n;
        int cnt=0;
        cin>>n;
        if(n==0)
            return 0;
        for(int i=n+1;i<=2*n;i++){
            if(isPrime[i])
                cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}