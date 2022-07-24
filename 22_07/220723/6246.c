#include <stdio.h>

int main(void) {
    int n, q, res = 0, tlqkf = 0;

    scanf("%d %d", &n, &q);
    int arr[n + 2];
    while (arr[tlqkf]) {
        arr[tlqkf] = 0;
        tlqkf ++;
    }
    for (int i = 0; i < q; i ++) {
        int l, k;
        
        scanf("%d %d", &l, &k);
        for (int ii = l; ii <= n; ii += k) {
            arr[ii] = 1;
        }
    }
    for (int i = 1; i <= n; i ++) {
        if (arr[i] == 0)
            res ++;
    }
    printf("%d", res);
}