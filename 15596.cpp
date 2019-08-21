#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<int> num;
long long sum(std::vector<int>&a){
int ans=0;
for(int i=0;i<a.size();i++){
    ans+=a[i];
}

return ans;
}
int main(void){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a=0;
        cin>>a;
        num.push_back(a);
    }
    cout<<sum(num);
}