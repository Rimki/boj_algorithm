#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    int M,N;
    int *arr=new int[1000000];
    
    cin>>M>>N;
    for(int i=M;i<=N;i++)
        arr[i]=i;
    arr[1]=0;

    for(int i=2;i*i<=N;i++){
        //if(arr[i]==0)
         //  continue;
        for(int j=2*i;j<=N;j+=i){
            arr[j]=0;
        }
    }

    for(int i=M;i<=N;i++){
        if(arr[i]!=0)
        cout<<arr[i]<<'\n';
    }
    delete[] arr;
    return 0;
}
 

   