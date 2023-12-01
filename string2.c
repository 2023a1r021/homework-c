#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];
    printf("enter the string:");
    scanf("%s", &str1);
    strcpy(str1, str2);
    printf("the string2 is: %s", str2);
    return 0;
}
