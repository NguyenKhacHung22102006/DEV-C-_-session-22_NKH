#include <stdio.h>
int main() {
    FILE *file;
    char input[256];  
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    printf("Nhap chuoi can them vao file: ");
    fgets(input, sizeof(input), stdin); 
    fprintf(file, "%s", input);
    fclose(file);
    printf("Chuoi da duoc them vao file.\n");
    return 0;
}

