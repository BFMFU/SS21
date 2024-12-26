#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *ptr= fopen("bt01.txt", "r");
    char line[256];
    if (ptr == NULL) {
        printf("Khong the mo tep bt01.txt! Hay kiem tra xem tep da ton tai.\n");
        return 1;
    }
    if (fgets(line, sizeof(line), ptr) != NULL) {
        printf("Dong dau tien trong tep: %s", line);
    } else {
        printf("Tep bt01.txt rong hoac khong doc duoc noi dung.\n");
    }
    fclose(ptr);
    return 0;
}

