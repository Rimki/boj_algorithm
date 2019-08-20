#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(void){
    int num[10]={0,};
    int ans[42]={0,};
    int cnt=0;
    for(int i=0;i<10;i++){
    cin>>num[i];
    ans[num[i]%42]++;
    }
    
   for(int i=0;i<42;i++)
       if(ans[i])
            cnt++;
   cout<<cnt;
}