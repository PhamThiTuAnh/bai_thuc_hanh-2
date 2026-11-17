#include <stdio.h>

struct SinhVien {
    char hoten[50];
    char masv[20];
    float diem1, diem2, diem3;
};

int main() {
    struct SinhVien ds[100];
    struct SinhVien *p;
    int n, i;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    p = ds; // con tro tro den phan tu dau tien cua mang

    // Nhap danh sach
    for(i = 0; i < n; i++) {
        printf("\nSinh vien %d:\n", i + 1);

        printf("Ma SV: ");
        scanf("%s", (p + i)->masv);

        printf("Ho ten: ");
        getchar();
        gets((p + i)->hoten);

        printf("Diem 1: ");
        scanf("%f", &(p + i)->diem1);

        printf("Diem 2: ");
        scanf("%f", &(p + i)->diem2);

        printf("Diem 3: ");
        scanf("%f", &(p + i)->diem3);
    }

    // In danh sach
    printf("\nDANH SACH SINH VIEN\n");
    for(i = 0; i < n; i++) {
        printf("\nMa SV: %s\n", (p + i)->masv);
        printf("Ho ten: %s\n", (p + i)->hoten);
        printf("Diem 1: %.2f\n", (p + i)->diem1);
        printf("Diem 2: %.2f\n", (p + i)->diem2);
        printf("Diem 3: %.2f\n", (p + i)->diem3);
    }

    return 0;
}
