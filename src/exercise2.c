#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    float a[10];
    for(int i = 0; i < 10; i++)
    {
        a[i] = atof(argv[i + 1]);
    }

    for(int i = 9; i >= 0; i--)
    {
        printf("%.2f ", a[i]);
    }
}

