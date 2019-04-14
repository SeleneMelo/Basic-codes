#include <stdio.h>

    int main() {
             float salario_fixo;
             float vendas_efetuadas;
             float salario_final;
                printf ("qual e o salario fixo do vendedor: ");
                scanf ("%f%", &salario_fixo);
                printf ("qual e o valor das vendas efetuadas pelo vendedor: ");
                scanf ("%f", &vendas_efetuadas);
                salario_final=salario_fixo+1,15*vendas_efetuadas;
                printf ("o salario final do vendedor e de %.2f", salario_final);

        return 0;

}
