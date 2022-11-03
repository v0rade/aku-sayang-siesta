#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[100];
    int id;
    printf("Nama#Id =");
    gets(name);
    char str[14] ="ID = #Nama =";
    // Returns first token
    char *token = strtok(str, "#");
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, "#");
    }
    getch();
    return 0;
}