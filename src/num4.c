#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    float a[10];
    float b[10];

    for (int i = 0; i < 10 ; i++){
        a[i] = atof(argv[i + 1]);
        b[i] = atof(argv[i + 1]);
    }

    float x = atof(argv[11]);
    int k = atoi(argv[12]);

    for (int i = 0; i <= k; i++)
    {
        if (i < k){
            printf("%.2f ", a[i]);
        }else if (i == k){
            a[i] = x;
            printf("%.2f ", a[i]);
            break;
        }
    }
    for (int  i = k + 1; i < 10; i++){
        printf("%.2f ", b[(10 + i - 1) % 10]);
    }
    printf("\n");
}

