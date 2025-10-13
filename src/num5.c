#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    int a[10][3];
    int k = 1;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 3; j++){
            a[i][j] = atoi(argv[k]);
            k++;
        }
    }printf("A = ");
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
    }
    printf("\n");
    int b[3][10];
    int c = 31;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++){
            b[i][j] = atoi(argv[c]);
            c++;
        }
    }printf("B = ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++){
            printf("%d ", b[i][j]);
        }
    }
    printf("\n\nA * B\n");
    int cc = 0;
    int i = 0, j = 0;

    while (cc != 10){
        for (int k = 0; k < 10; k++){
            int s = a[i + cc][j + 0]*b[i + 0][j + k] + a[i + cc][j + 1]*b[i + 1][j + k] + a[i + cc][j + 2]*b[i + 2][j + k];
            printf("%d ", s);
        }
        printf("\n");
        cc++;
    }
    printf("\n");
}
