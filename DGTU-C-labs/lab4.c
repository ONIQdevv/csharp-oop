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
    int temp1 = 0;
    int temp2 = 0;

    int temp1_x;
    int temp1_y;

    int temp2_x;
    int temp2_y;

    for (int i = 0; i < size; ++i) {
        if(Array[i][i] > temp1) {
            temp1 = Array[i][i];
            temp1_x = i;
            temp1_y = i;
        }
    }

    for (int i = 0; i < size; ++i) {
        if(Array[size - i - 1][i] > temp2) {
            temp2 = Array[size - i - 1][i];
            temp2_x = size - i - 1;
            temp2_y = i;
        }
    }

    int temp3 = Array[(size - 1) / 2][(size - 1) / 2];

    if (temp2 > temp1) {
        Array[temp2_x][temp2_y] = temp3;
        Array[(size - 1) / 2][(size - 1) / 2] = temp2;
    } else {
        Array[temp1_x][temp1_y] = temp3;
        Array[(size - 1) / 2][(size - 1) / 2] = temp1;
    }

//    printf("%d\n", temp1);
//    printf("%d\n", temp2);
//    printf("%d\n", temp3);

    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j) {
            printf("%d", Array[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n");

}