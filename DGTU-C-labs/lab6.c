#include <stdio.h>

void function(int cols, int rows, int Array[cols][rows]);

int main(void) {
    int rows = 4;
    int cols = 3;

    int nums[4][3] = {{3, 6, 8},
                     {1, 5, 2},
                     {7, 9, 4},
                     {7, 3, 2}};

    function(cols, rows, nums);
}


void function(int cols, int rows, int Array[rows][cols]) {

    int temp[rows][cols];

    for (int i = 0; i < rows - 1; ++i) {
        for (int j = 0; j < cols; ++j) {
            temp[i][j] = Array[i][j] - Array[3][j];
        }
    }

    for (int j = 0; j < cols; ++j) {
        temp[3][j] = Array[3][j];
    }
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j) {
            printf("%d", temp[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n");

}