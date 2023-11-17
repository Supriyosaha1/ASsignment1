// main.c
#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

int main() {
   float*my_array;
    my_array=(float*)calloc(100, sizeof(float));

    for (int i = 1; i < 101; i++)
    {
        float squaredValue = (float)i * i;
        printf("Element %d: %f\n", i, squaredValue);
        my_array[i-1]=i*i;
    }

    float result[2]; // initializing the length of the array
    mean_variance(my_array, 100, result);

    // Print mean and variance
    printf("Mean: %f\n", result[0]);
    printf("Variance: %f\n", result[1]);

     // Write the result to a binary file
    FILE *binaryFile = fopen("result.bin", "wb");
    fwrite(result, sizeof(float), 2, binaryFile);
    fclose(binaryFile);

    

     // Free the allocated memory
    free(my_array);
    return 0;
}

/*
OUTPUT:
C:\Users\supri\OneDrive\Desktop\girish numerical\Assignment>mingw32-make
gcc -Wall -Wextra -std=c99 -c main.c
gcc -Wall -Wextra -std=c99 -o main.exe main.o stats.o

C:\Users\supri\OneDrive\Desktop\girish numerical\Assignment>main
Element 1: 1.000000
Element 2: 4.000000
Element 3: 9.000000
Element 4: 16.000000
Element 5: 25.000000
Element 6: 36.000000
Element 7: 49.000000
Element 8: 64.000000
Element 9: 81.000000
Element 10: 100.000000
Element 11: 121.000000
Element 12: 144.000000
Element 13: 169.000000
Element 14: 196.000000
Element 15: 225.000000
Element 16: 256.000000
Element 17: 289.000000
Element 18: 324.000000
Element 19: 361.000000
Element 20: 400.000000
Element 21: 441.000000
Element 22: 484.000000
Element 23: 529.000000
Element 24: 576.000000
Element 25: 625.000000
Element 26: 676.000000
Element 27: 729.000000
Element 28: 784.000000
Element 29: 841.000000
Element 30: 900.000000
Element 31: 961.000000
Element 32: 1024.000000
Element 33: 1089.000000
Element 34: 1156.000000
Element 35: 1225.000000
Element 36: 1296.000000
Element 37: 1369.000000
Element 38: 1444.000000
Element 39: 1521.000000
Element 40: 1600.000000
Element 41: 1681.000000
Element 42: 1764.000000
Element 43: 1849.000000
Element 44: 1936.000000
Element 45: 2025.000000
Element 46: 2116.000000
Element 47: 2209.000000
Element 48: 2304.000000
Element 49: 2401.000000
Element 50: 2500.000000
Element 51: 2601.000000
Element 52: 2704.000000
Element 53: 2809.000000
Element 54: 2916.000000
Element 55: 3025.000000
Element 56: 3136.000000
Element 57: 3249.000000
Element 58: 3364.000000
Element 59: 3481.000000
Element 60: 3600.000000
Element 61: 3721.000000
Element 62: 3844.000000
Element 63: 3969.000000
Element 64: 4096.000000
Element 65: 4225.000000
Element 66: 4356.000000
Element 67: 4489.000000
Element 68: 4624.000000
Element 69: 4761.000000
Element 70: 4900.000000
Element 71: 5041.000000
Element 72: 5184.000000
Element 73: 5329.000000
Element 74: 5476.000000
Element 75: 5625.000000
Element 76: 5776.000000
Element 77: 5929.000000
Element 78: 6084.000000
Element 79: 6241.000000
Element 80: 6400.000000
Element 81: 6561.000000
Element 82: 6724.000000
Element 83: 6889.000000
Element 84: 7056.000000
Element 85: 7225.000000
Element 86: 7396.000000
Element 87: 7569.000000
Element 88: 7744.000000
Element 89: 7921.000000
Element 90: 8100.000000
Element 91: 8281.000000
Element 92: 8464.000000
Element 93: 8649.000000
Element 94: 8836.000000
Element 95: 9025.000000
Element 96: 9216.000000
Element 97: 9409.000000
Element 98: 9604.000000
Element 99: 9801.000000
Element 100: 10000.000000
Mean: 3383.500000
Variance: 9055261.000000
*/
