#include <stdio.h>

int main(void) {
    int n, q, rpt, l, ll, res = 0;

    scanf("%d %d", &n, &q);
    char arr[10000] = {'.', };

    for (int i = 0; i < q; i ++) {
        scanf("%d %d", &l, &ll);
        for (int aa = 0; aa < q; aa ++) {
            for (int a = l; i < n; a += ll)
                arr[a] = 'B';
        }
    }
    for (int i = 0; i < n; i ++) {
        res += arr[i] == '.' ? 1 : 0;
    }
    printf("%d", res);
}