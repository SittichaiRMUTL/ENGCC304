#include <stdio.h>

int main() {

    char Name[30];

    int Num;

    scanf("%s",Name);
    scanf("%d",&Num);

    printf("+-----------+\n");
    printf("| %s %d |\n",Name,Num);
    printf("+-----------+\n");

    return 0;
}