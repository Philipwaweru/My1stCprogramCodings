#include <stdio.h>

int main(void) {
    int i, j;
    int *p;  // a pointer to an integer
    p = &i;
    *p = 5;
    j = i;

    printf("%d %d %d\n", i, j, *p);

    return 0;
}
