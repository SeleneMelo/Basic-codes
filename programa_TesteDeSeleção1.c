#include <stdio.h>

    int main () {
        int A, B, C, D;

        printf ("Digite quatro valores inteiros: ");
        scanf("%d %d %d %d", &A, &B, &C, &D);

        if (B>C && D>A && C+D>B+A && C>0 && D>0 && A%2==0) {
            printf ("valores aceitos!");}
        else {
            printf ("valores nao aceitos!");
        }

    return 0;
    }







