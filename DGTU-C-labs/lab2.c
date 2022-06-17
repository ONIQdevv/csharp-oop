#include <stdio.h>

void function(int*, int);

int main(void) {
    int nums[] = {6,18,3,7,2,4,5,13};
    int size = 8;
    function(nums, size);
}

void function(int* Array, int size) {
    for (int i = 0; i < size; i+=2) {
        int temp1 = Array[i];
        int temp2 = Array[i + 1];
        Array[i] = temp2;
        Array[i + 1] = temp1;
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", Array[i]);
    }

    printf("\n");
}