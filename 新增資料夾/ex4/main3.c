#include <stdio.h>

int main() {
    for(int i = 1, j = 0;i <= 9;){ {
        if(j == 9){
            printf("%d*%d=%d\t", i, j, i * j);
            i++;
            j = 0;
            printf("\n"); 
        }
    }
}
}