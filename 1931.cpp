#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

pair<int,int> schedule[100001];

int main(void){
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    cin>>schedule[i].second>>schedule[i].first;
    sort(schedule,schedule+N);

    int end = schedule[0].first;
    int cnt = 1;
    for(int i=1;i<N;i++){
        if(schedule[i].second>=end){
            cnt++;
            end=schedule[i].first;
        }
    }
    cout<<cnt;
    return 0;
}