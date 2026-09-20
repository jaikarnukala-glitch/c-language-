#include <stdio.h>

int main() {
    int rows, cols, matrix[100][100];

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d%s", matrix[i][j], i == rows - 1 ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}