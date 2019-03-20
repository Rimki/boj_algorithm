#include<stdio.h>

int main(){
    int l,p,v,cnt=1;
    while(1){
        scanf("%d %d %d",&l,&p,&v);
        if(!l&&!p&&!v)
            break;
        printf("Case %d: %d\n",cnt++,v/p*l+(v%p<l? v%p : l));
    }
    return 0;
}