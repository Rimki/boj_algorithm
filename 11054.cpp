#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    int N,ans=0;
    cin>>N;
    int list[1002],dpl[1002],dpr[1002];
    for(int i=1;i<=N;i++){
    cin>>list[i];
    dpl[i]=1;
    dpr[i]=1;
    }
    for(int i=1;i<=N;i++)
       for(int j=1;j<i;j++)
            if(list[i]>list[j]&&dpl[i]<dpl[j]+1)
                dpl[i]=dpl[j]+1;
      
    for(int i=N;i>=1;i--)
        for(int j=N;j>i;j--)
            if(list[i]>list[j]&&dpr[i]<dpr[j]+1)
                dpr[i]=dpr[j]+1;

    for(int i=1;i<=N;i++)
        if(ans<dpl[i]+dpr[i])
            ans=dpl[i]+dpr[i];

    cout<<ans-1;                    
    return 0;

}