#include<stdio.h>
int main(){
    char str[1000001]={0,};
    int alpha[26]={0,};
    int small=65,large=97;
    scanf("%s",str);
    for(int i=0;i<1000001;i++){
        for(int j=0;j<26;j++){
            if(str[i]==small+j||str[i]==large+j)
                alpha[j]++;
        }
    }
    int max=0;
    int ans;
    for(int i=0;i<26;i++){
        if(alpha[i]>max){
            max=alpha[i];
            ans=i;
        }
    }
    int dup=0;
    for(int i=0;i<26;i++){
        if(alpha[i]==max)
            dup++;
    }
    if(dup>1)
    printf("?");
    else
    printf("%c",ans+65);
    
}