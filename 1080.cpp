#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[50][50];
int b[50][50];
int c;

void flip(int x,int y) {
  for(int i=x;i<x+3;i++)
    for(int j=y;j<y+3;j++)
      a[i][j]=!a[i][j];
    
}

int main(void){
    cin>>n>>m;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%1d",&a[i][j]);
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) 
            scanf("%1d",&b[i][j]);
    
    for(int i=0;i<n-2;i++)
        for(int j=0;j<m-2;j++)
            if(a[i][j]!=b[i][j]){
                flip(i,j);
                c++;
            }

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i][j]!=b[i][j]){
                cout<<-1;
                return 0;
            }
    cout<<c;
    return 0;
}