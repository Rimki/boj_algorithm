#include <cstdio>
using namespace std;

int i, tmp, n, flag, cnt;


int main() {
	scanf("%d", &n);

	while (++i) {
		tmp = i, flag = 0;
		while (tmp) {
			if (tmp % 1000 == 666) 
            flag = 1;
			tmp /= 10;
		}

		if (flag) {
			cnt++;
			if (cnt == n)
            break;
		}
	}

	printf("%d\n", i);

	return 0;
}