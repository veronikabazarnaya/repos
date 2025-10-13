#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){

    float a[10];
    int k = atoi(argv[11]);

    for (int i = 9; i >= 0; i--)
    {
        a[i] = atof(argv[i + 1]);
    }

    if (k >= 0){
        printf("right\n");
        for (int i = 0; i < 10; i++){
            printf("%.1f ", a[(10 + i - k) % 10]);
    }
    }else{
        printf("left\n");
        for (int i = 0; i < 10; i++){
            printf("%.1f ", a[(i + abs(k)) % 10]);
    }
    }
    printf("\n");
}

