#include <stdio.h>

int main() {
    int start = 0;
    int end = 1000;
    int increment = 10;

    printf("Counting from %d to %d with an increment of %d:\n", start, end, increment);

    for (int i = start; i <= end; i += increment) {
        printf("%d", i);
    }
    
    printf("\n");
    return 0;
}
