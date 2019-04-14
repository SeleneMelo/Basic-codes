#include <stdio.h>

        int main (){
            int num;

            printf ("digite um valor qualquer: ");
            scanf("%d", &num);

            if (0<=num && num<=25) {
                printf ("numero pertence ao intervalo [0,25]");}
            else {
                if(25<num && num<=50) {
                    printf ("numero pertence ao intervalo (25,50]");}
            else {
                if(50<num && num<=75) {
                    printf ("numero pertence ao intervalo (50,75]");}
            else {
                if (75<num && num<=100) {
                    printf ("numero pertence ao intervalo (75,100]");}
            else {
                printf ("numero fora do intervalo");
                 }
                }
               }
              }

        return 0;
        }
