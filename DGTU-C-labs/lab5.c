#include <stdio.h>

void function(int size, int Array[][size]);

int main(void) {
    int size = 3;

    int nums[][3] = {{3, 6, 8},
                     {1, 5, 2},
                     {7, 9, 4}};

    function(size, nums);
}

void function(int size, int Array[][size]) {
    int temp[size][size];
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            temp[i][j] = Array[j][i];
        }
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            Array[i][j] = temp[i][j];
        }
    }

    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j) {
            printf("%d", Array[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n");

}