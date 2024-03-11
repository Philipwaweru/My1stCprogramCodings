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

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int i;

    for (i = 0; i < MAX; i++) {
        a[i] = rand();
        printf("%d\n", a[i]);
    }

    bubbleSort(a, MAX);

    printf("--------------\n");
    for (i = 0; i < MAX; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
