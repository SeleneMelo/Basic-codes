#include <stdio.h>

    int main () {
        float tempo;
        float v_media;
        float distancia;
        float litros_necessarios;
                printf ("digite o tempo, em horas, do percurso feito por Joaozinho: ");
                scanf ("%f", &tempo);
                printf ("digite a velocidade media feita pelo carro de Joaozinho: ");
                scanf ("%f", &v_media);
                distancia=tempo*v_media;
                litros_necessarios=distancia/12;
                printf ("Joaozinho precisara de %.3f litros para a viagem", litros_necessarios);

        return 0;

    }
