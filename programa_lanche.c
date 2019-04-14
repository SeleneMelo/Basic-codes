#include <stdio.h>

    int main () {
        float codigo, quantidade, X;


        printf ("digide o codigo [1 a 5] e a quantidade, respectivamente: ");
        scanf("%f %f", &codigo, &quantidade);

        if (codigo==1) {
            X=4.00*quantidade;
            printf ("preco= %.2f", X);
        }
        if (codigo==2) {
            X=4.50*quantidade;
            printf ("preco= %.2f", X);
        }
        if (codigo==3){
            X=5.00*quantidade;
            printf("preco= %.2f", X);
        }
        if (codigo==4) {
            X=2.00*quantidade;
            printf("preco= %.2f", X);
        }
        if (codigo==5){
            X=1.50*quantidade;
            printf("preco= %.2f", X);
        }

    return 0;
    }
