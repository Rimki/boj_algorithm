#include<iostream>
#include<cstdio>
using namespace std;
int d[15][15];
int main(void){
    int T;
    cin>>T;
    
    for (int i = 1; i < 15; i++) 
        d[0][i] = i;
	for (int i = 1; i < 15; i++) 
    for (int j = 1; j < 15; j++)
		d[i][j] = d[i-1][j] + d[i][j-1];

    while(T--){
        int k,n;
        cin>>k>>n;
        cout<<d[k][n]<<endl;
    }
}