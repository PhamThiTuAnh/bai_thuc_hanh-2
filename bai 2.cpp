#include <stdio.h>

int main()
{
    char s[100];
    int dem[256]={0};
    int i;

    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        dem[s[i]]++;
    }

    for(i=0;i<256;i++)
    {
        if(dem[i]>0)
            printf("%c : %d\n",i,dem[i]);
    }

    return 0;
}
