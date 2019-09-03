#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

string str;

int main(void){
    cin>>str;
    int result=0;
    string temp="";
    bool minus=false;
    for(int i=0;i<=str.size();i++){
        if(str[i]=='+'||str[i]=='-'||str[i]=='\0'){
            if(minus)
                result-=stoi(temp);
            else
                result+=stoi(temp);
            temp="";

            if(str[i]=='-')
                minus=true; 
            continue;
        }
        temp+=str[i];
    }
    cout<<result;
    return 0;
}