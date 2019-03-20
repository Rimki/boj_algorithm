#include<cstdio>
int t;
char s[81];
int main() {
    scanf("%d", &t);
    while (t--) {
        int r = 0, c = 0;
        scanf("%s", s);
        for (int i = 0; s[i]; i++) s[i] == 'O' ? r += ++c : c = 0;
        printf("%d\n", r);
    }
    return 0;
}