#include <stdio.h>
void xoaKhoangTrang(char s[]) {
    int i = 0, j = 0;
    int space = 0;
    while (s[i] != '\0') {
        if (s[i] != ' ') {
            s[j++] = s[i];
            space = 0;
        } else {
            if (!space) {
                s[j++] = ' ';
                space = 1;
            }
        }
        i++;
    }
    if (j > 0 && s[j - 1] == ' ')
        j--;
    s[j] = '\0';
}
int main() {
    char s[100] = "Cau    truc     du      lieu";
    xoaKhoangTrang(s);
    printf("%s\n", s);
    return 0;
}
