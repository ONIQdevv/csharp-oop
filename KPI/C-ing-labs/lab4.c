#include <stdio.h>
#include <stdlib.h>

// Initialization
void fill_int_array( unsigned int * uiptr, unsigned int size_of_array );
void fill_float_array( float * fptr, unsigned int size_of_array );
void print_int_array( const unsigned int * uiptr, unsigned int size_of_array );
void print_float_array( const float * fptr, unsigned int size_of_array);

unsigned int sum ( const unsigned int * uiptr, unsigned int size_of_array );
double product( const float * fptr, unsigned int size_of_array );

// Definition of main func
int main() {
    unsigned int * A;
    float * B;
    unsigned int Size; // Змінна для збережння розміру динамічного масиву
    unsigned int amount; // змінна для збереження суми елементів масиву А
    double mult; // змінна для збереження добутку елементів масиву В
    printf("Enter size of array: ");
    scanf("%u", &Size);
    A = (unsigned int *) calloc (Size, sizeof(unsigned int) );
    B = (float *) malloc (Size * sizeof(float) );
    if( A == NULL || B == NULL ){
        printf("Memory has not been allocated");
        exit(0);

    }
    fill_int_array( A, Size );
    fill_float_array( B, Size );
    print_int_array( A, Size );
    print_float_array( B, Size );
    amount = sum( A, Size );
    mult = product( B, Size );
    printf("\n\nSum = %u", amount);
    printf("\nProduct = %.3lf", mult);
    free(A);
    free(B);
    return 0;

}

//----------- Other functions definition ----------------
//-------------------------------------------------------
void fill_int_array( unsigned int * A, unsigned int Size ) {
    unsigned int j;
    unsigned int temp;
    printf("\n\nEnter values of UNSIGNED INT elements of array.\n");
    for( j = 0; j <= Size-1; j++ ){
        printf("A[%u]= ", j);
        scanf("%u", &temp);
        A[j] = temp;

    }

}
//---------------------------------------------------------
void fill_float_array( float * B, unsigned int Size ) {
    unsigned int j;
    float temp;
    printf("\n\nEnter values of FLOAT elements of array.\n");
    for( j = 0; j <= Size-1; j++ ){
        printf("B[%u]= ", j);
        scanf("%f", &temp);
        B[j] = temp;

    }

}
//-------------------------------------------------------------
void print_int_array( const unsigned int * A, unsigned int Size ) {
    unsigned int j;
    printf("\n\nArray of UNSIGNED INT values:\n");
    for( j = 0; j < Size; j++ ) {
        printf("%5d", A[j] );

    }

}
//-------------------------------------------------------------

void print_float_array( const float * B, unsigned int Size ) {
    unsigned int j;
    printf("\n\nArray of FLOAT values:\n");
    for( j = 0; j < Size; j++ ) {
        printf("%7.2f", B[j] );
    }
}
//---------------------------------------------------------------
unsigned int sum (const unsigned int * A, unsigned int Size ) {
    unsigned int j, S;
    S = 0; // змінна, яка використовується для обрахунку значення суми елементів масиву
    for( j = 0; j < Size; j++ )
        S += A[j];
    return S;
}
//---------------------------------------------------------------
double product(const float * B, unsigned int Size ) {
    unsigned int j;
    double M;
    M = 1.0; //змінна, яка використовується для обрахунку значення добутку елементів масиву
    for( j = 0; j < Size; j++ ) {
        M *= B[j];
    }
    return M;
}
//---------------------------------------------------------------
