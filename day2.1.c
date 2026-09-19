#include <stdio.h>

int main() {
    int length, breadth;
    
    scanf("%d %d", &length, &breadth);
    
    printf("Area=%d, Perimeter=%d",
           length * breadth,
           2 * (length + breadth));
    
    return 0;
}