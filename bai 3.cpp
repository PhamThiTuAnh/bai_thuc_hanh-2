#include <stdio.h>
#include <string.h>
void xoaKyTu(char s[], int k)
{
    int i;
    int n = strlen(s);

    if(k < 0 || k >= n)
        return;

    for(i = k; i < n; i++)
    {
        s[i] = s[i + 1];
    }
}
int main()
{
    char s[100];
    int k;
    printf("Nhap chuoi: ");
    gets(s);
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &k);
    xoaKyTu(s, k);
    printf("Chuoi sau khi xoa: %s", s);
    return 0;
}
