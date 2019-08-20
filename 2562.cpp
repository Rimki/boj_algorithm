#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    int num[9]={0,};
    for(int i=0;i<9;i++)
    cin>>num[i];
    int max=num[0];
    int location=1;
    for(int i=0;i<9;i++){
        if(max<num[i]){
            max=num[i];
            location=i+1;
        }
    }
    cout<<max<<endl<<location;
}