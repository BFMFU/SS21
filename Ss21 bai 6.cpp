#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char buffer[256]; 
    sourceFile = fopen("bt01.txt", "r");
    if (sourceFile == NULL) {
        printf("Khong the mo tep bt01.txt! Hay kiem tra xem tep da ton tai.\n");
        return 1;
    }
    destFile = fopen("bt06.txt", "w");
    if (destFile == NULL) {
        printf("Khong the tao tep bt06.txt!\n");
        fclose(sourceFile);
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), sourceFile) != NULL) {
        fputs(buffer, destFile);
    }
    printf("Da sao chep noi dung tu bt01.txt sang bt06.txt thanh cong!\n");
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}

