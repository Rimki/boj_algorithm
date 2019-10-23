#include<iostream>
#include<cstdio>
#include<stack>
#include<string>
using namespace std;

bool Check(string str){
    int len=(int)str.length();
    stack<char> s;

    for(int i=0;i<len;i++){
        char c= str[i];

        if(c=='('){
            s.push(str[i]);
        }
        else{
            if(!s.empty()){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    return s.empty();
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;

        if(Check(str)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}