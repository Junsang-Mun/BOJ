long long sum(int *a, int n) {
    int i = 0;
    long long ans = 0;
    while (i < n) {
        ans = ans + a[i];
        i ++;
    }
    return ans;
}