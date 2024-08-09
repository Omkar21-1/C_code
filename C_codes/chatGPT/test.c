#include <stdio.h>
#include <stdlib.h>

// Function to generate the 2D array
int** generate2DArray(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    // Initial allocation for returnColumnSizes
    *returnColumnSizes = (int*) malloc((numsSize + 1) * sizeof(int));

    // Initial allocation for the 2D array
    int** ret = (int**) malloc((numsSize + 1) * sizeof(int*));

    for (int i = 0; i <= numsSize; ++i) {
        unsigned short k = 0;
        for (int j = 0; j <= i; ++j) {
            if (j == 0) {
                ret[i] = (int*) malloc(1 * sizeof(int));
            } else {
                ret[i] = (int*) realloc(ret[i], (j + 1) * sizeof(int));
            }
            ret[i][k] = 1; // Example value
            ++k;
        }
        // Update the size of this row
        (*returnColumnSizes)[i] = k;

        // Reallocate to make space for the next row
        ret = (int**) realloc(ret, (i + 2) * sizeof(int*));
        
        *returnSize = i + 1;
    }

    return ret;
}

int main() {
    int nums[] = {1, 2, 3}; // Example input array
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int returnSize;
    int* returnColumnSizes;

    int** array = generate2DArray(nums, numsSize, &returnSize, &returnColumnSizes);

    // Print the 2D array along with its column sizes
    if (array != NULL) {
        for (int i = 0; i < returnSize; ++i) {
            printf("Row %d (size %d): ", i, returnColumnSizes[i]);
            for (int j = 0; j < returnColumnSizes[i]; ++j) {
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }

        // Free allocated memory
        for (int i = 0; i < returnSize; ++i) {
            free(array[i]);
        }
        free(array);
        free(returnColumnSizes);
    }

    return 0;
}
