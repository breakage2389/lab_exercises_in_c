#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];

    printf("Enter your name: ");
    fgets(name , sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; //removes the \n in the end , in func fgets!!
    printf("%s , nice to meet you!", name);

}
