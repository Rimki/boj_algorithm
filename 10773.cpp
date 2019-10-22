#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int t;
    cin>>t;

    stack<int> s;
    for(int i=0;i<t;i++){
        int num;
        cin>>num;

        if(num)
            s.push(num);
        else
            s.pop();
            
    }

    long long sum=0;
    while(!s.empty()){
        sum+=s.top();
        s.pop();
    }

    cout<<sum;
    return 0;
}