#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<vector>
using namespace std;

bool cmp(const string &s1,const string &s2){
    if(s1.size()==s2.size()){
        return s1<s2;
    }
    return s1.size()<s2.size();
}

int main(void){
    int N;
    cin>>N;

    vector<string> v;

    for(int i=0;i<N;i++){
        char c[51];
        scanf("%s",c);
        string str(c);
        v.push_back(str);
    }

    vector<string>::iterator it;
    vector<string>::iterator end;
    
    sort(v.begin(),v.end(),cmp);
    end=unique(v.begin(),v.end());

    for(it=v.begin();it!=end;it++)
        printf("%s\n",(*it).c_str());

    return 0;    
}