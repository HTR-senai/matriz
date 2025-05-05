/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int i, j;
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];
    
    
    
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    
    printf("soma\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}