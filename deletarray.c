#include <stdio.h>
int main()
{
    int n, i, a[10], d, count = 0, pos;
    printf("enter the n value :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nenter the elements of the array :");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("\n\nelements of an array are:");
        printf("\n%d", a[i]); // 12,13,14,15,16
    }
    printf("\nenter the element to be deleted:");
    scanf("%d", &d); // 17
    for (i = 0; i < n; i++)
    { // 12,13,14,15,16
        if (d == a[i])
        { // 17==15
            count = 1;
            pos = i; // i==3
        }
    }
    for (i = pos; i < n; i++)
    {
        a[i] = a[i + 1]; // 0 1 2 3 4
    }
    n = n - 1;
    if (count == 0)
    {
        printf("given element is not found");
    }
    printf("the element after deletion is");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}
