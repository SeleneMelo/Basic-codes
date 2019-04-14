#include <stdio.h>

    int main () {
        int A, B, C;
        int P, area_trap;

        printf ("digite tres valores inteiros: ");
        scanf ("%d %d %d",ss &A, &B, &C);

        if (A<B+C && A>B-C && B<C+A && B>C-A && C<A+B && C>A-B) {
            P=A+B+C;
            printf ("O triangulo existe.\n Perimetro= %d", P);
        }
        else {
            area_trap=((A+B)*C/2);
            printf("O triangulo nao existe. \n Area do trapezio= %d", area_trap);
        }

    return 0;


    }
