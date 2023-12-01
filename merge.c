// wap to  merge two arrays
// conditions:
// 1.merge if both arrays of same size
// 2.if both different size display any message
#include <stdio.h>
void mergeArrays(int arr1[], int arr2[], int size1, int size2)
{
    if (size1 == size2)
    {
        int mergedSize = size1 + size2;
        int mergedArray[mergedSize];
        for (int i = 0; i < size1; ++i)
        {
            mergedArray[i] = arr1[i];
        }
        for (int i = 0; i < size2; ++i)
        {
            mergedArray[size1 + i] = arr2[i];
        }
        printf("Merged Array: ");
        for (int i = 0; i < mergedSize; ++i)
        {
            printf("%d ", mergedArray[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Arrays are of different sizes. Cannot merge.\n");
    }
}
int main()
{
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements of the first array: ");
    for (int i = 0; i < size1; ++i)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements of the second array: ");
    for (int i = 0; i < size2; ++i)
    {
        scanf("%d", &arr2[i]);
    }
    mergeArrays(arr1, arr2, size1, size2);
    return 0;
}
