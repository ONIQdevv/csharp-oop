#include <stdio.h>

void function(int*, int);

int main(void) {
    int nums[] = {6,18,3,7,2,4,0,13};
    int size = 8;
    function(nums, size);
}

void function(int* Array, int size) {

    for (int i = 0; i < size; ++i) {

        if(Array[i] != 0) printf("%d ", Array[i]);
        else break;

    }
    printf("\n");
}