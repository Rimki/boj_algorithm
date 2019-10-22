#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int count_two(int a){
    int val=a;
    int cnt=0;
    while(val>0){
        val/=2;
        cnt+=val;
    }
    return cnt;
}

int count_five(int a){
    int val=a;
    int cnt=0;
    while(val>0){
        val/=5;
        cnt+=val;
    }
    return cnt;

}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n,m;
    cin>>n>>m;

    int num2=count_two(n)-count_two(m)-count_two(n-m);
    int num5=count_five(n)-count_five(m)-count_five(n-m);
    cout<<min(num2,num5);
    return 0;
}