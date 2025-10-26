#include "array_function.h"

void join_int_arrays(int* src1,size_t size_src1, int* src2,size_t size_src2, int* dest,size_t size_dest)
{
    for(size_t i = 0; i < size_src1; i++)
    {
        dest[i] = src1[i];
    }
    for(size_t i = 0; i < size_src2; i++)
    {
        dest[size_src1 + i] = src2[i];
    }
}

void join_and_sort_int_arrays(int *src1,size_t size_src1, int *src2,size_t size_src2, int *dest,size_t size_dest)
{
    int t;
    for(size_t i = 0; i < size_dest - 1; i++)
    {
        for (size_t j = 0; j < size_dest - i - 1; j++)
        {
            if (dest[j] > dest[j + 1])
            {
                t = dest[j];
                dest[j] = dest[j + 1];
                dest[j + 1] = t;
            }
        }
    }
}


void get_min_and_max_from_int_array(int *src,size_t size, int *min, int *max)
{
    int minn = 10000;
    for(size_t i = 0; i < size; i++)
    {
        if(src[i] < minn)
        {
            minn = src[i];
        }
    }
    int maxx = -10000;
    for(size_t i = 0; i < size; i++)
    {
        if(src[i] > maxx)
        {
            maxx = src[i];
        }
    }
    *min = minn;
    *max = maxx;
}

