#include <stdio.h>

int main() {
    int rows, cols, matrix[100][100];
    int first = 1;

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int diagonal = 0; diagonal < rows + cols - 1; diagonal++) {
        int startRow = diagonal - cols + 1;
        if (startRow < 0)
            startRow = 0;

        int endRow = diagonal;
        if (endRow >= rows)
            endRow = rows - 1;

        if (diagonal % 2 == 0) {
            for (int i = endRow; i >= startRow; i--) {
                printf("%s%d", first ? "" : " ", matrix[i][diagonal - i]);
                first = 0;
            }
        } else {
            for (int i = startRow; i <= endRow; i++) {
                printf("%s%d", first ? "" : " ", matrix[i][diagonal - i]);
                first = 0;
            }
        }
    }

    return 0;
}