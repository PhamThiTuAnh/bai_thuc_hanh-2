#include <stdio.h>

void xoaDau(char s[])
{
    int i=0,j=0;

    while(s[i]==' ')
        i++;
    while(s[i]!='\0')
    {
	
        s[j]=s[i];
        j++;
        i++;
    }
    s[j]='\0';
}
int main()
{
    char s[100];
    gets(s);
    xoaDau(s);
    puts(s);
    return 0;
}
