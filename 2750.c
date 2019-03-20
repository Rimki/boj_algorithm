#include<stdio.h>
int main(){
    int n,tmp;
    int list[1000]={0,};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&list[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(list[i]>list[j]){
                tmp=list[i];
                list[i]=list[j];
                list[j]=tmp;
            }

        }
    }
    for(int i=0;i<n;i++)
    printf("%d\n",list[i]);
}