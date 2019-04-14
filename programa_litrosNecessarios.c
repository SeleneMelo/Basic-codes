#include <stdio.h>

    int main () {
        float t_hora;
        float t_min;
        float v_mediaSI;
        float v_mediaKmH;
        float distancia;
        float litros_necessarios;
              printf ("digite o tempo do percurso, em minutos, feito por Joaozinho: ");
              scanf ("%f", &t_min);
              printf ("digite a velocidade media, em m//s, feita pelo carro de Joaozinho: ");
              scanf ("%f", &v_mediaSI);
              t_hora=t_min/60;
              v_mediaKmH=3.6*v_mediaSI;
              distancia=t_hora*v_mediaKmH;
              litros_necessarios=distancia/12;
              printf ("Joaozinho precisara de %.3f litros para a viagem", litros_necessarios);

        return 0;


    }
