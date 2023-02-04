#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
char a[50];
char b[100];

    

scanf("%c",&ch);
scanf("%s",&a);
scanf(" \n");
scanf("%[^\n]%*c",b);
printf("%c\n",ch);
printf("%s\n",a);
printf("%s\n",b);

    return 0;
}
