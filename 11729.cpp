#include<iostream>
#include<cstdio>
using namespace std;
void hanoi(int n,int from,int to){
    if(n!=0){
        hanoi(n-1,from,6-from-to);
        printf("%d %d\n",from,to);
        hanoi(n-1,6-from-to,to);
    }
}
int main(void){
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    hanoi(n,1,3);
    return 0;
}