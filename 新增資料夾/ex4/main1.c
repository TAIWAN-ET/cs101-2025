#include <stdio.h>

int main() {
    int n = 7;
    for(int j = 1; j <= n; j++) {
        for (int i = 1; i <= j; i++)
        {
            printf("%d" ,j);
        }
        printf("\n");
    }
    return 0;
}