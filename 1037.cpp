#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

 vector<int> v;

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int N;
    cin>>N;
    
    for(int i=0;i<N;i++){
        int A;
        cin>>A;
        v.push_back(A);
    }
    sort(v.begin(),v.end());
    cout<<v.front()*v.back();
    return 0;

}