typedef struct Node
{
    char HoTen[50];
    char MaSV[20];
    float Diem1;
    float Diem2;
    float Diem3;
    struct Node *next;
} Node;

Node *Head = NULL;
