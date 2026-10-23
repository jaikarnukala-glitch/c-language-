#include <stdio.h>

int main(void) {
    int n;
    int nums[10000];

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int candidate = 0;
    int count = 0;

    /* Find a possible majority element. */
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    /* Verify that it occurs more than half the time. */
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    printf("%d\n", count > n / 2 ? candidate : -1);
    return 0;
}