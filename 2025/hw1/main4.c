#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[100];
    scanf("%s", a);
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        b[i] = a[len-1-i];
    }
    b[len] = '\0';
    printf("%s\n", b);
    return 0;
}