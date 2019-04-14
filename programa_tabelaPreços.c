#include <stdio.h>

    int main () {
        float preco;
        int quantidade, codigo;

        printf("digite o codigo e a quantidade desejada: ");
        scanf("%d %d", &codigo, &quantidade);

        if(codigo==1){
            preco=4.00*quantidade;
            printf("TOTAL= %.2f", preco);
        }
        if(codigo==2){
            preco=4.50*quantidade;
            printf("TOTAL = %.2f", preco);
        }
         if(codigo==3){
            preco=5.00*quantidade;
            printf("TOTAL= %.2f", preco);
         }
          if(codigo==4){
            preco=2.00*quantidade;
            printf("TOTAL= %.2f", preco);
          }
           if(codigo==5){
            preco=1.50*quantidade;
            printf("TOTAL= %.2f", preco);}

            if(codigo<1 || codigo>5) {
                printf("Codigo invalido!");
            }

            return 0;

    }


