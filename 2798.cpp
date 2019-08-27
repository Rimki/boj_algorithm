#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    int N,M;
    int list[100];
    cin>>N>>M;
    for(int i=0;i<N;i++)
    cin>>list[i];
    int ans=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if(i!=j&&j!=k&&k!=i){
                    int sum=list[i]+list[j]+list[k];
                    if(sum<=M&&ans<sum)
                    ans=sum;
                }
            }
        }
    }
    cout<<ans;
    return 0;

}