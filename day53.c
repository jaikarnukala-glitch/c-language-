#include <stdio.h>

int main(void) {
    int n;
    long long nums[10000];
    long long total = 0, left_sum = 0;

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%lld", &nums[i]);
        total += nums[i];
    }

    for (int i = 0; i < n; i++) {
        long long right_sum = total - left_sum - nums[i];

        if (left_sum == right_sum) {
            printf("%d\n", i);
            return 0;
        }

        left_sum += nums[i];
    }

    printf("-1\n");
    return 0;
}