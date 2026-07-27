// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
// double* convertTemperature(double celsius, int* returnSize) {

// }
// complete code
#include <stdio.h>
#include <stdlib.h>

double *convertTemperature(double celsius, int *returnSize)
{
    double *result = (double *)malloc(2 * sizeof(double));
    result[0] = celsius + 273.15;
    result[1] = celsius * 9 / 5 + 32;
    *returnSize = 2;
    return result;
}

int main()
{
    int returnSize;
    double celsius = 36.50;
    double *result = convertTemperature(celsius, &returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%f ", result[i]);
    }
    free(result);
    return 0;
}