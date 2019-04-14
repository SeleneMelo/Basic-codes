#include <stdio.h>

    int main (){
        float m[4][4];
        int i, j;

        for(i=0;i<4;i++) {
            for(j=0;j<4;j++){
                m[i][j]=0;
         }
        }
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                printf("%d", m[i][j]);
         }
                printf("\n");
        }
        return 0;
}
