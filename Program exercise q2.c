#include <stdio.h>

int rand_seed;

/*
 * From K&R - produces an integer random number
 * between 0 and 32767.
 */
int rand(void) {
    printf("Enter a seed value for number generation: ");
    scanf("%d", &rand_seed);

    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

int main(void) {
    int i;

    printf("Enter a seed value for random number generation: ");
    scanf("%d", &rand_seed);

    for (i = 0; i < 5; i++) {
        printf("%d\n", rand());
    }

    return 0;
}

