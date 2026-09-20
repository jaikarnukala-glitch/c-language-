#include <stdio.h>

int main() {
    int rows, cols, matrix[100][100], rowSum[100];

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;

        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        printf("%d%s", rowSum[i], i == rows - 1 ? "" : " ");
    }

    return 0;
}