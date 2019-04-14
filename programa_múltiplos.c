#include <stdio.h>

    int main () {
        int A, B;

        printf ("digite dois numeros inteiros: ");
        scanf ("%d %d", &A, &B);

        if (B%A==0 || A%B==0) {
            printf (" A e B sao multiplos entre si");
        }
        else {
            printf ("A e B nao sao multiplos entre si");
        }

    return 0;

    }
