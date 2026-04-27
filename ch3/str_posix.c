#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]){
    char a[] = "Hello";
    char *b;

    b = strdup(a);
    printf("b = %s\n", b);
    return 0;
}