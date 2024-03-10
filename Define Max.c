#include <stdio.h>

#define MAX 10

int a[MAX];
int rand_seed = 10;

/*
 * From K&R - produces an integer random number
 * between 0 and 32767.
 */
int rand(void) {
    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

int main(void) {
    int i, t, x, y;

    /* Fill array */
    for (i = 0; i < MAX; i++) {
        a[i] = rand();
        printf("%d\n", a[i]);
    }

    /* More stuff will go here in a minute */

    return 0;
}
