#include <stdio.h>

int main () {
    int salario, prestacao;
    printf("Digite o valor do seu salario: ");
    scanf ("%d", &salario);

    printf ("Digite o valor da prestacao: \n");
    scanf ("%d", &prestacao);
    if(salario<0 || prestacao<0){
        printf ("Valores invalidos \n");
    }

    if(prestacao>0.2*salario) {
        printf ("Emprestimo nao concedido");
    }
    else {
        printf ("emprestimo concedido");
    }

        return 0;
        }
