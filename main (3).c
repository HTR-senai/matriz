/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int matriz[2][2] = {
       {1,2},
       {3,4}
   };
   
   printf("matriz preenchida manualmente: \n");
   printf("%d %d\n", matriz[0][0], matriz[0][1]);
   printf("%d %d\n", matriz[1][0], matriz[1][1]);

    return 0;
}