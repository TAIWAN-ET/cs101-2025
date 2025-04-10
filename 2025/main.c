#include <stdio.h>


void replace_all(char* str, char oldChar, char newChar) {

    while (*str != '\0') {
       
        if (*str == oldChar) {
            
            *str = newChar;
        }

        str++;
    }
}

int main() {
    
    char str[100];
    char oldChar = 'a';
    char newChar = 'A';
    scanf("%s", str);
    replace_all(str, oldChar, newChar);
    printf("%s\n", str);

    
    return 0;
}