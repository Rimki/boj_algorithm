#include<bits/stdc++.h>
using namespace std;

int main(void){
    string n;
    cin>>n;

    sort(n.begin(),n.end(),greater<char>());

    int cnt=0;

    for(int i=0;i<n.length();i++)
        cnt+=(n.at(i)-'0');
    if(cnt%3==0 && n.at(n.length()-1)=='0')
        cout<<n;
    else
        cout<<-1;
}