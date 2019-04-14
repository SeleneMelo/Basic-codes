#include <stdio.h>

    int main() {
             float raio;
             float area;
             float comprimento;
             float PI;
                        printf ("indique o valor do raio da circunferencia: ");
                        scanf ("%f", &raio);
                        PI=3.14159;
                        area=PI*raio*raio;
                        comprimento=2*PI*raio;
                        printf ("o valor da area e %.2f \n",area);
                        printf ("o valor do comprimento e %.2f", comprimento);
            return 0;

}
