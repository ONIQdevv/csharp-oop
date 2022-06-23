#include <stdio.h>

void function(int*, int, int, int);

int main(void) {
    int nums[] = {6,18,3,7,2,4,5,13};
    int size = 8;
    int M = 4;
    int L = 1;
    function(nums, size, M, L);
}

void function(int* Array, int size, int M, int L) {
    for (int i = 0; i < size; ++i) {
        if(Array[i] % M == L) {
            printf("%d ", Array[i]);
        }
    }
    printf("\n");
}