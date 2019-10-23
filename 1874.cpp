#include <stdio.h>
#include <stack>
#include <vector>
using namespace std;

int n, a[100001];
stack<int> stk;
vector<char> ans;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
    scanf("%d", &a[i]);

	int pos = 0;
	for (int i = 1; i <= n; i++) {
		stk.push(i), ans.push_back('+');
		while (!stk.empty() && stk.top() == a[pos]) {
			pos++, stk.pop(), ans.push_back('-');
		}
	}

	if (!stk.empty()) puts("NO");
	else for (auto it : ans) printf("%c\n", it);

	return 0;
}