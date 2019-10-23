#include<iostream>
#include<cstdio>
#include<stack>
#include<string>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    while(1){
        string str;
        getline(cin,str);
        stack<char> st;

        if(str.length()==1 && str[0]=='.')
            break;
        bool flag= true;
    for(int i=0;i<str.length();i++){
        if(str[i]=='(')
            st.push('(');
        else if(str[i]=='[')
            st.push('[');
        else if(str[i]==']'){
            if(!st.empty() && st.top()=='[')
                st.pop();
            else{
                flag=false;
                break;
            }
        }
        else if(str[i]==')'){
            if(!st.empty() && st.top()=='(')
                st.pop();
            else{
                flag=false;
                break;
            }
        }
    } 
    if(flag && st.empty())
        cout<<"yes\n";
    else
        cout<<"no\n";
            
    }
    return 0;
}   