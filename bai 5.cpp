#include <stdio.h>
#include <string.h>
void xoaCuoi(char s[])
{
    int n;
    n=strlen(s);
    while(n>0 && s[n-1]==' ')
    {
        s[n-1]='\0';
        n--;
    }
}
int main()
{
    char s[100];
    gets(s);
    xoaCuoi(s);
    puts(s);
    return 0;
}
