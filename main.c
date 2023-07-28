#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recursion(int n)
{
    if (n <= 2)
        return n;

    return recursion(n - 3) + recursion(n - 2);
}

int iterativeWithArray(int n, int *arr)
{

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;

    for (int i = 3; i <= n; ++i)
        arr[i] = arr[i - 3] + arr[i - 2];

    return arr[n];
}
int dynamicMethod(int n, int *arr)
{
    if (n <= 2)
        return n;

    if (arr[n] != -1)
        return arr[n];

    return arr[n] = dynamicMethod(n - 3, arr) + dynamicMethod(n - 2, arr);
}

int main()
{
    int n = 10;
    int result1, result2, result3;
    int *arrIteratve = (int *)malloc(n * (sizeof(int) + 1));
    memset(arrIteratve, -1, sizeof(int) * (n + 1));
    int *arrDynamic = (int *)malloc(n * (sizeof(int) + 1));
    memset(arrDynamic, -1, sizeof(int) * (n + 1));

    result1 = recursion(n);
    result2 = iterativeWithArray(n, arrIteratve);
    result3 = dynamicMethod(n, arrDynamic);

    printf("Recursion: %d\n", result1);
    printf("Iterative: %d\n", result2);
    printf("Dynamic: %d\n", result3);

    free(arrIteratve);
    free(arrDynamic);
    return 0;
}
