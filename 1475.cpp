#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(void){
    int N;
    cin>>N;

    int arr[10]={0};
    while(1){
        arr[N%10]++;
        if(N/10==0)break;
        N/=10;
    }
    int cnt=0;
    for(int i=0;i<10;i++){
        if(i!=6&&i!=9)
            cnt=max(cnt,arr[i]);
    }
    cout<<max(cnt,(arr[6]+arr[9]+1)/2);
    return 0;
}