#include <stdio.h>

int main() {
    int m, n;
    
    printf("Nhap so hang: ");
    scanf("%d", &m);
    
    printf("Nhap so cot: ");
    scanf("%d", &n);

    float a[m][n];
    float *p;

    p = &a[0][0];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < m * n; i++) {
        printf("a[%d][%d] = ", i / n, i % n);
        scanf("%f", p + i);
    }
    printf("\nMang vua nhap la:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8.2f ", *(p + i * n + j));
        }
        printf("\n");
    }

    return 0;
}
