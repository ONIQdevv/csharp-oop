#include <stdio.h>
#include <stdlib.h>

int get_int_from_file(char* path);
void write_array_to_file (char* path, int length);
void write_binary_to_file(char* path, int length);

int main(void) {
    unsigned long int N = get_int_from_file("lab.txt");

    write_array_to_file("labb.txt", 5);
    write_binary_to_file("labbb", 5);

    // Unit tests for lab 6
    unsigned long correct_N = 154;

    // Test for function get_int_from_file
    if (N == correct_N) {
        printf("Test get_int_from_file passed, N = %ld\n", N);
    } else {
        printf("Test get_int_from_file failed\n");
    }
}

int get_int_from_file(char* path) {
    FILE* stream = fopen(path, "r");

    unsigned long n;
    fscanf(stream, "%ld", &n);

    fclose(stream);

    return n;
}

void write_array_to_file (char* path, int length) {
    int* N = malloc(sizeof (int)*length);
    printf("Enter %d numbers: ", length);
    for (int i = 0; i < length; ++i) {
        scanf("%d", &N[i]);
    }

    FILE* stream = fopen(path, "w");
    for (int i = 0; i < length; ++i) {
        fprintf(stream, "%d ", N[i]);
    }

    fclose(stream);
}

void write_binary_to_file(char* path, int length) {
    int* N = malloc(sizeof (int)*length);
    printf("Enter %d numbers: ", length);
    for (int i = 0; i < length; ++i) {
        scanf("%d", &N[i]);
    }

    FILE* stream = fopen(path, "wb");
    fwrite(N, 4, length, stream);

    fclose(stream);
}