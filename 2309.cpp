#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int list[9]={0,};
   
    int sum=0;
    for(int i=0;i<9;i++){
       cin>>list[i];
        sum+=list[i];
    }
    for(int i=0;i<8;i++){
        for(int j=i+1;j<9;j++){
            if(sum-list[i]-list[j]==100){
                list[i]=-1;
                list[j]=-1;
                break;
            }
            break;
        }
    }
    sort(list,list+9);
    for(int i=2;i<9;i++)
    cout<<list[i]<<"\n";

}