#include <stdio.h>
#include <string.h>

int main() {
    char pw[100];
    int i;

    for(i = 1; i <= 5; i++) {
        printf("Nhap password: ");
        scanf("%s", pw);

        if(strcmp(pw, "abcxyz") == 0) {
            printf("Accepted\n");
            return 0;
        }

        printf("Sai password!\n");
    }

    printf("Da het 5 lan thu.\n");

    return 0;}
