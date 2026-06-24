#include <stdio.h>

int main() {

    char Language[30], Compiler[30], Output[30];
    
    scanf("%s",Language);
    scanf("%s",Compiler);
    scanf("%s",Output);

    printf("Language: %s\n",Language);
    printf("Compiler: %s\n",Compiler);
    printf("Output Program: %s\n",Output);

    return 0;
}