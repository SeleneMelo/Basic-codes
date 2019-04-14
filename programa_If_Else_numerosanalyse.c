#include <stdio.h>
#include <math.h>

    int main () {
        int A, B, C;
        printf ("escreva tres numeros: \n");
        scanf ("%d %d %d", &A, &B, &C);

        if (A==B || A==C || B==C) {
            printf ("existem numeros repetidos \n");
        }
        else { if(A>B && A>C) {
            printf ("A e o maior numero \n");
        }
        else {if (B>A && B>C) {
            printf ("B e o maior numero \n");
        }
        else {if (C>A && C>B) {
            printf ("C e o maior numero \n");
           }
          }
         }
        }
        if(A==B || A==C || B==C && A<B && A<B) {
            printf ("A e o menor numero \n");
        }
        if (A==B || A==C || B==C && B<A && B<C) {
            printf ("B e o menor numero \n");
        }
        if (A==B || A==C || B==C && C<A && C<B) {
            printf ("C e o menor numero \n");
        }
        if (A%2==0) {
            printf ("A e um numero par \n");
        }
        else {
            printf ("A e um numero impar \n");
        }
        if (B%2==0) {
            printf ("B e um numero par \n");
        }
        else {
            printf ("B eum numero impar \n ");
        }
        if (C%2==0){
            printf ("C e um numero par \n");
        }
        else {
            printf ("C e um numero impar \n");
        }
        if (A>0 && A!=0) {
            printf ("A e um numero positivo \n");
        }
        else {
            printf ("A e um numero negativo \n");
        }
        if (B>0 && B!=0) {
            printf("B e um numero positivo \n");
        }
        else{
            printf("B e um numero negativo \n");
        }
        if (C>0 && C!=0) {
            printf ("C e um numero positivo \n");
        }
        else {
            printf ("C e um numero negativo \n \a");
        }


  return 0;

    }
