#include <stdio.h>

int main(void) {
    int s_card_len, s_card[500001];
    int g_card_len, g_card[500001];
    int answer[500001] = {0, };
    
    scanf("%d", &s_card_len);
    for (int i = 0; i < s_card_len; i ++) {
        scanf("%d", &s_card[i]);
    }
    scanf("%d", &g_card_len);
    for (int i = 0; i < g_card_len; i ++) {
        scanf("%d", &g_card[i]);
    }
    for (int i = 0; i < g_card_len; i ++) {
        for (int ii = 0; ii < s_card_len; ii ++) {
            if (s_card[ii] == g_card[i]) {
                answer[i] = 1;
            }
        }
    }
    for (int i = 0; i < g_card_len - 1; i ++) {
        printf("%d ", answer[i]);
    }
    printf("%d", answer[g_card_len - 1]);
}