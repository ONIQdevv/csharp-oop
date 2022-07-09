#include <stdio.h>
#include <stdlib.h>

void fill_int_array(unsigned int* uiptr, unsigned int size_of_array);
void fill_float_array(float* fptr, unsigned int size_of_array);
void print_int_array(const unsigned int* uiptr, unsigned int size_of_array);
void print_float_array(const float* fptr, unsigned int size_of_array);
unsigned int sum(const unsigned int* uiptr, unsigned int size_of_array);
double product(const float* fptr, unsigned int size_of_array);
double mean_value(const unsigned int* A, unsigned int Size);
unsigned int find_min(const unsigned int* A, unsigned int Size);
float find_max(const float* B, unsigned int Size);

int main() {
    unsigned int* A;
    float* B;
    unsigned int Size; // Змінна для збережння розміру динамічного масиву
    unsigned int amount; // змінна для збереження суми елементів масиву А
    double mult; // змінна для збереження добутку елементів масиву В
    printf("Enter size of array: ");
    scanf("%u", &Size);
    A = (unsigned int*) calloc(Size, sizeof(unsigned int));
    B = (float*) malloc(Size* sizeof(float));
    if (A == NULL || B == NULL) {
        printf("Memory has not been allocated");
        exit(0);
    }

    fill_int_array(A, Size);
    fill_float_array(B, Size);
    print_int_array(A, Size);
    print_float_array(B, Size);
    amount = sum(A, Size);
    mult = product(B, Size);
    double average_value = mean_value(A, Size);
    unsigned int min_value = find_min(A, Size);
    float max_value = find_max(B, Size);
    printf("\n\nSum = %u", amount);
    printf("\nProduct = %.3lf", mult);
    printf("\nAvverage = %.3lf", average_value);
    printf("\nMIN = %d", min_value);
    printf("\nMAX = %.3lf", max_value);
    printf("\n");
    free(A);
    free(B);
    return 0;
}

void fill_int_array(unsigned int* A, unsigned int Size) {
    unsigned int j;
    printf("\n\nEnter values of UNSIGNED INT elements of array.\n");
    for (j = 0; j <= Size - 1; j++){
        A[j] = Size - (j + 1);
    }
}

void fill_float_array(float* B, unsigned int Size) {
    unsigned int j;
    printf("\n\nEnter values of FLOAT elements of array.\n");
    for (j = 0; j <= Size-1; j++) {
        B[j] = 5.0 * j + 5.0;
    }
}

void print_int_array(const unsigned int* A, unsigned int Size) {
    unsigned int j;
    printf("\n\nArray of UNSIGNED INT values:\n");
    for (j = 0; j < Size; j++)
        printf("%5d", A[j]);
}

void print_float_array(const float* B, unsigned int Size) {
    unsigned int j;
    printf("\n\nArray of FLOAT values:\n");
    for (j = 0; j < Size; j++)
        printf("%7.2f", B[j]);
}

unsigned int sum(const unsigned int* A, unsigned int Size) {
    unsigned int j, S;
    S = 0;
    
    for (j = 0; j < Size; j++)
        S += A[j];
    return S;
}

double product(const float* B, unsigned int Size) {
    unsigned int j;
    double M;
    M = 1.0;

    for (j = 0; j < Size; j++)
        M *= B[j];
    return M;
}

double mean_value(const unsigned int* A, unsigned int Size) {
    unsigned int S = 0;
    for (unsigned int j = 0; j < Size; j++)
        S += A[j];

    return (float) S / Size;
}

unsigned int find_min(const unsigned int* A, unsigned int Size) {
    unsigned int M = A[0];

    for (unsigned int j = 0; j < Size; j++) {
        if (A[j] < M) M = A[j];
    }
    return M;
}

float find_max(const float* B, unsigned int Size) {
    float M = B[0];

    for (unsigned int j = 0; j < Size; j++) {
        if (B[j] > M) M = B[j];
    }

    return M;
}