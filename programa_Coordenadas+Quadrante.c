#include <stdio.h>

    int main () {
        float X, Y;

        printf("Digite dois pontos, X e Y, de uma coordenada do plano cartesiano: ");
        scanf("%f %f", &X, &Y);

        if(X==0 && Y==0) {
            printf("O poto esta na origem!\n");
        }
        if(X>0 && Y>0){
            printf("o ponto esta no primeiro quadrante!\n");
        }
        if(X<0 && Y>0){
            printf("o ponto esta no segundo quadrante!\n");
        }
        if(X<0 && Y<0) {
            printf("o ponto esta no terceiro quadrante!\n");
        }
        if(X>0 && Y<0) {
            printf("O ponto esta no quarto quadrante!\n");
        }

    return 0;
    }












