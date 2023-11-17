#include<stdio.h>
# include <stdlib.h>
void mean_variance(float *my_array, int length  , float *result);
int main()
{
    float*my_array;
    my_array=(float*)malloc(100*sizeof(float));

    for (int i = 1; i < 101; i++)
    {
        my_array[i-1]=i*i;
    }
    
    printf("Values in the array:\n");
    
    for (int i = 0; i < 100; i++)
    {
        printf("%f",my_array[i]);
    }
    return 0;

}