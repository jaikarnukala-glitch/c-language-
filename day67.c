#include <stdio.h>

int main(void) {
    int m, n;
    int nums1[10000], nums2[10000];

    if (scanf("%d %d", &m, &n) != 2 || m < 0 || n < 0) {
        return 0;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int i = 0, j = 0;
    int first = 1;

    while (i < m && j < n) {
        int value;

        if (nums1[i] <= nums2[j]) {
            value = nums1[i++];
        } else {
            value = nums2[j++];
        }

        if (!first) {
            putchar(' ');
        }
        printf("%d", value);
        first = 0;
    }

    while (i < m) {
        if (!first) {
            putchar(' ');
        }
        printf("%d", nums1[i++]);
        first = 0;
    }

    while (j < n) {
        if (!first) {
            putchar(' ');
        }
        printf("%d", nums2[j++]);
        first = 0;
    }

    putchar('\n');
    return 0;
}