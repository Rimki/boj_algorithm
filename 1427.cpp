#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

string str;
int cnt[10];

int main(void){
    cin>>str;
    for(int i = 0; i < str.length(); i++)
		cnt[str[i] - '0']++;
	for (int i = 9; i >= 0; i--)
		while (cnt[i]--) 
            printf("%d", i);

	return 0;

}