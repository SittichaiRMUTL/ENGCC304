#include <stdio.h>

int main() {

    char Nickname[30], Section[30];
    int id;

    scanf("%d",&id);
    scanf("%s",&Nickname);
    scanf("%s",&Section);

    printf("Student ID: %d\n",id);
    printf("Nickname: %s \n",Nickname);
    printf("Section: %s.\n",Section);

    return 0;
}