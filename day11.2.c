#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %g%%", percentage);
    } else if (sellingPrice < costPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %g%%", percentage);
    } else {
        printf("No Profit No Loss");
    }

    return 0;
}