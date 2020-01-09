#include<bits/stdc++.h>
using namespace std;

int k;
vector<int> Max,Min;
string sign;

bool valid(vector<int> &v){
    for(int i=0;i<sign.length();i++){
        if(sign[i]=='<'&&v[i]>v[i+1])
            return false;
        else if(sign[i]=='>'&&v[i]<v[i+1])
            return false;
        }
    return true;
}

int main(void){
    cin>>k;
    for(int i=0;i<k;i++){
        char temp;
        cin>>temp;
        sign+=temp;
    }
    
    for(int i=9;i>9-(k+1);i--)
        Max.push_back(i);

    while(1){
        if(valid(Max))
            break;
        prev_permutation(Max.begin(),Max.end());
    }  

    for(int i=0;i<(k+1);i++)
        Min.push_back(i);

    while(1){
        if(valid(Min))
            break;
        next_permutation(Min.begin(),Min.end());
    }

    for(int i=0;i<Max.size();i++)
        cout<<Max[i];
    cout<<endl;

    for(int i=0;i<Min.size();i++)
        cout<<Min[i];
    
    return 0;
}