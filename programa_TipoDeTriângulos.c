#include <stdio.h>

    int main (){
        double A=0, B=0, C=0;
        double temp=0;

        printf("digite tres numeros: ");
        scanf("%lf %lf %lf", &A, &B, &C);

        if (A<B) {
            temp=A;
            A=C;
            B= temp; }
        if (A<C) {
            temp=A;
            A=C;
            C= temp;}
        if (B<C){
            temp=B;
            B=C;
            C=temp;}

        if (A>=B+C) {
            printf("NAO FORMA TRIANGULO!");}
        if (A*A==B*B+C*C){
            printf("TRIANGULO RETANGULO");}
        if (A*A>B*B+C*C){
            printf("TRIANGULO OBTUSANGULO");}
        if (A*A<B*B+C*C) {
            printf("TRIANGULO ACTANGULO");}
        if (A==B && A==C && B==C){
            printf("TRIANGULO EQUILATERO");}
        if (A==B && C!=A || A==C && B!=A || B==C && A!=B) {
            printf ("TRIANGULO ISOCELES");}

    return 0;

    }
