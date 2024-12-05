#include <stdio.h>

int main() {
    int i =10;
    if(i & (i-1)) {
        printf("false\n");
    } else {
        printf("true\n");
    }
return 0;
}   