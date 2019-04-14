#include <stdio.h>
#include <math.h>

    int main() {
        float a, b, c, r1, r2, disc;
        printf ("Digite o valor de a, b e c para calculo das raizes da equacao: ");
        scanf ("%f %f %f", &a, &b, &c);

        disc=b*b-(4*a*c);
        r1=((-b)+sqrt(disc))/(2*a);
        r2=((-b)-sqrt(disc))/(2*a);

        if (disc<0 || a==0) {
            printf("Impossivel calcular!");
            }
        else {
            printf ("Os valores das raizes r1 e r2 sao respectivamente: %f %f", r1, r2);
        }


        return 0;
    }
