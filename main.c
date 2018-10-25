#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_CHARS 60

int main()
{
    printf("Enter some text: ");

    char enteredText[MAX_CHARS];
    gets(enteredText);

    int a; // This will navigate through the array.
    int digitCounter = 0;

    for (a = 0; a < MAX_CHARS; a++)
    {
        int currentChar = enteredText[a];
        if ( isdigit(currentChar) )
        {
            digitCounter++;
        }
    }

    printf("Encountered %d digits.\n", digitCounter);

    return 0;
}
