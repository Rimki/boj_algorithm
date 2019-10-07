#include<iostream>
#include<cstdio>
using namespace std;

int arr[10001];

int main(void){
    int N;
    cin>>N;
    

    for(int i=0;i<N;i++){
    int tmp;
    scanf("%d",&tmp);
    arr[tmp]++;
    }

    for(int i=1;i<=10000;i++){
    for(int j=0;j<arr[i];j++)
    printf("%d\n",i);
    }
   
    return 0;
}