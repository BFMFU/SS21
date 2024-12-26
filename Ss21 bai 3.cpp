#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *ptr=fopen("bt01.txt", "a");
    char userInput[256];
    if (ptr == NULL) {
        printf("Khong the mo tep bt01.txt! Hay kiem tra xem tep da ton tai chua.\n");
        return 1;
    }
    printf("Nhap chuoi ban muon ghi them vao tep: ");
    fgets(userInput, sizeof(userInput), stdin);
    fprintf(ptr, "%s", userInput);
    printf("Ghi thanh cong vao tep bt01.txt!\n");
    fclose(ptr);
    return 0;
}

