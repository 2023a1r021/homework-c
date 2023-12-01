#include <stdio.h>

int main()
{
    char userInput[100]; // Assuming a maximum string length of 99 characters

    printf("Enter a string: ");
    scanf("%99[^\n]", userInput); // Read up to 99 characters until a newline character is encountered

    printf("You entered: %s\n", userInput);

    return 0;
}
