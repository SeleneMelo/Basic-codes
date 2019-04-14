#include <stdio.h>
#include <math.h>

    int main () {
        int a, b, c;
        printf ("digite tres numeros: ");
        scanf ("%d %d %d", &a, &b, &c);

        if (a==b || a==c || b==c) {
            printf ("existem numeros repetidos");
        }
        else {if (a>b && a>c) {
            printf ("a e o maior numero");
        }
        else {if (b>a && b>c) {
            printf ("b e o maior numero");
        }
        else { if (c>a && c>b) {
            printf ("c e o maior numero");
                       }
                  }
            }
        }

        return 0;

    }













