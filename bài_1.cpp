#include <stdio.h>

int main() {
    int n, i;
    float a[100];
    float *p;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    p = a;

   
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", p + i);
    }

    
    printf("Mang vua nhap la:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", *(p + i));
    }

    return 0;
}
