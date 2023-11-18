// main.c
#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_statistics.h>
#include "stats.h"

int main() {
    float* my_array;
    my_array = (float*)calloc(100, sizeof(float));

    for (int i = 1; i < 101; i++) {
        float squaredValue = (float)i * i;
        printf("Element %d: %f\n", i, squaredValue);
        my_array[i - 1] = i * i;
    }

    // Calculate mean and variance using GSL functions
    double gslMean, gslVariance;
    gslMean = gsl_stats_mean((const double*)my_array, 1, 100);
    gslVariance = gsl_stats_variance((const double*)my_array, 1, 100);

    // Print results
    printf("Computed Mean using GSL: %f\n", gslMean);
    printf("Computed Variance using GSL: %f\n", gslVariance);

    float result[2]; // initializing the length of the array
    mean_variance(my_array, 100, result);

    // Print mean and variance
    printf("Mean: %f\n", result[0]);
    printf("Variance: %f\n", result[1]);

    // Free the allocated memory
    free(my_array);
    return 0;
}
