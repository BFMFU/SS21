#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *ptr= fopen("bt05.txt", "w");
    int numLines;
    char line[256];
    if (ptr == NULL) {
        printf("Khong the tao tep bt05.txt!\n");
        return 1;
    }
    printf("Nhap so dong ban muon ghi vao tep: ");
    scanf("%d", &numLines);
    getchar(); 
    for (int i = 0; i < numLines; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(ptr, "%s", line);
    }
    fclose(ptr);
    ptr = fopen("bt05.txt", "r");
    if (ptr == NULL) {
        printf("Khong the mo lai tep bt05.txt!\n");
        return 1;
    }
    printf("\nNoi dung tep bt05.txt vua nhap:\n");
    while (fgets(line, sizeof(line), ptr) != NULL) {
        printf("%s", line);
    }
    fclose(ptr);
    return 0;
}

