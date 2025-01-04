#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30] = "Raghul you can do it trust me";
    char str2[30];
    strcpy(str2,str1);
    printf("Cpy the name: %s\n",str2);
    return 0;
}