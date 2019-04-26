#include<iostream>
#define _GLIBCXX_USE_CXX11_ABI 0
using namespace std;

bool check(string str){
    bool alpha[26]={false};

    for(int i=0;i<str.length();i++){
        if(alpha[str[i]-'a'])
        return false;
        else{
            char tmp=str[i];
            alpha[tmp-'a']=true;
            while(1){
                if(tmp!=str[++i]){
                    i--;
                    break;
                }
            }
        }
    }
    return true;

}


int main(void){
     int n;
     int count=0;
     cin>>n;
     for(int i=0;i<n;i++){
         string str;
         cin>>str;
        if(check(str))
        count++;
     }
    cout<< count;
    return 0;
}