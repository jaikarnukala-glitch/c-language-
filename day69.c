#include <stdio.h>

int main(void) {
    int n;
    int nums[10000];
    int seen[10001] = {0};

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);

        if (nums[i] >= 0 && nums[i] <= 10000 && seen[nums[i]]) {
            printf("%d\n", nums[i]);
            return 0;
        }

        if (nums[i] >= 0 && nums[i] <= 10000) {
            seen[nums[i]] = 1;
        }
    }

    return 0;
}