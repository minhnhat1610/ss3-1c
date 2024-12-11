#include <stdio.h>

int main() {
    char name[50];

    printf("Nhập tên của bạn: ");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Xin chào %s!\n", name);

    return 0;
}