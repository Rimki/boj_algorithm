#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(void){
    int triangle[501][501];
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    for(int j=1;j<=i;j++)
    cin>>triangle[i][j];

    for(int i=N;i>=1;--i)
        for(int j=1;j<=i;j++)
            triangle[i-1][j]+= max(triangle[i][j],triangle[i][j+1]);
    cout<<triangle[1][1];
    return 0;
        
}