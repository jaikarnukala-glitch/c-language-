#include <stdio.h>

int main(void)
{
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        perror("Could not open numbers.txt");
        return 1;
    }

    long long number;
    long long sum = 0;
    int count = 0;

    while (fscanf(file, "%lld", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No integers found.\n");
        return 0;
    }

    double average = (double)sum / count;

    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}