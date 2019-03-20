#include<stdio.h>
int main(){
    int n[8]={0};
    int ans=0;
    for(int i=0;i<8;i++)
    scanf("%d",&n[i]);

    if(n[1]-n[0]==1)
        ans=0;
    else if(n[1]-n[0]==-1) 
        ans=1;
    else
        ans=2;

    for(int i=1;i<7;i++){
        if(n[i+1]-n[i]==1&&ans==0)
        continue;
        if(n[i+1]-n[i]==-1&&ans==1)
        continue;

        ans=2;
        break;
    }        

    if(ans==0)
    printf("ascending");
    else if(ans==1)
    printf("descending");
    else
    printf("mixed");
        
}