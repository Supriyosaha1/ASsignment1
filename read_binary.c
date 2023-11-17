// read_binary.c
#include <stdio.h>

int main() {
    // Read the contents from the binary file
    FILE *binaryFile = fopen("result.bin", "rb");
    if (binaryFile == NULL) {
        perror("Error opening binary file");
        return 1;
    }

    float result[2];
    fread(result, sizeof(float), 2, binaryFile);

    // Close the file
    fclose(binaryFile);

    // Display the contents read from the binary file
    printf("Mean: %f\n", result[0]);
    printf("Variance: %f\n", result[1]);

    return 0;
}
