#include <stdio.h>
int main() {
    FILE *file;
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    char ch = fgetc(file);
    if (ch != EOF) {
        printf("Ky tu dau tien trong file la: %c\n", ch);
    } else {
        printf("File rong.\n");
    }
    fclose(file);
    return 0;
}

