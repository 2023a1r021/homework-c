#include <stdio.h>
int main()
{
    int class[10];
    int i;

    printf("enter 10 student roll number");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &class[i]);
    }
    printf("all student roll number");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", class[i]);
    }
    printf("\n8th student roll number : %d", class[7]);
    printf("\n5th student roll number : %d", class[4]);
    return 0;
}
