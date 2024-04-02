#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define LENGTH 1048576

extern double vector();

int main(int argc, char* argv[]) {

    clock_t start_time, end_time;
    double execution_time;
    double FinalAnswerAsm;

    printf("Vector Length: %d \n", LENGTH);
    printf("All vectors are initialize to 1.5 \n");
    printf("\n");

    start_time = clock();

    double* var1 = malloc(LENGTH * sizeof(double));
    double* var2 = malloc(LENGTH * sizeof(double));

    if (var1 == NULL || var2 == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }
    int i;
    // Initialize var1 and var2 with 1.5
    for (i = 0; i < LENGTH; i++) {
        var1[i] = 1.5;
        var2[i] = 1.5;
    }

    // Your code using var1 and var2 goes here

    double sdot = 0;
    double temp;

    for (i = 0; i < LENGTH; i++) {
        temp = var1[i] * var2[i];
        sdot = sdot + temp;
    }

    end_time = clock(); // End the timer
    execution_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("C Dot Product: %.2f\n", sdot);
    printf("C Execution time: %.6f seconds\n \n", execution_time);

    // Don't forget to free the allocated memory
    free(var1);
    free(var2);
    
    //-------------------ASSEMBLY---------------------------------------
    start_time = clock();

    FinalAnswerAsm = vector();

    end_time = clock();

    execution_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    printf("Assembly Dot Product = %.2lf \n", FinalAnswerAsm);
    printf("Assembly Execution time: %.6f seconds \n", execution_time); 


    return 0;
}