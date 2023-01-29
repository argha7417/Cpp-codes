//4
#include <stdio.h>
void main()
{
    int sum = 0, i, len;
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        sum = sum + str[i];
    }
    printf("Sum of all ASCII values is %d", sum);
}
