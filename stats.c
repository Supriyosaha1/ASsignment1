// stats.c
#include <gsl/gsl_statistics_float.h>

void gsl_mean_variance(float *data, size_t size, double *result) {
    result[0] = gsl_stats_float_mean(data, 1, size);
    result[1] = gsl_stats_float_variance(data, 1, size);
}
