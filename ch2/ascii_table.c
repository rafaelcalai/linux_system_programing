#include <stdio.h>


int main(int argc, char *argv[])
{
    for(char character = 65 ; character <= 90 ; character++)
    {
        printf("Character lowercase number: %d\t", character);
        printf("Character lowercase: %c\n", character);
    }

    for(char character = 97 ; character <= 122 ; character++)
    {
        printf("Character uppercase number: %d\t", character);
        printf("Character uppercase: %c\n", character);
    }
}
