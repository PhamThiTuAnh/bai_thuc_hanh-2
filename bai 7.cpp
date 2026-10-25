#include <stdio.h>

int demTu(char s[])
{
    int i;
    int dem = 0;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] != ' ' && s[i] != '\t')
        {
            if(i == 0 || s[i-1] == ' ' || s[i-1] == '\t')
                dem++;
        }
    }
    return dem;
}
int main()
{
    char s[100];
    gets(s);
    printf("So tu = %d", demTu(s));
    return 0;
}
