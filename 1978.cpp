#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    int N;
    int ans=0;
    cin>>N;
    int* array=new int[N];
    for(int i=0;i<N;i++)
        cin>>array[i];
    
    for(int i=0;i<N;i++){
    for(int j=2;j<1001;j++){
        if(array[i]!=j&&array[i]%j==0)
            break;
        if(array[i]==j)
            ans++;
        
    }
    }
    cout<<ans;

    delete[] array;
    return 0;
}