#include <stdio.h>

int main() {
    int i = 1;
    int j = 1;
    for(int n = 1; n <= 81 ; n++) {
        if(i % 9 == 0){
            printf("%d", i * j);
            j++;
            i = 1;
            printf("\n"); 
        }
        else{
            printf("%d", i * j);
            i++;
            printf(" ");
        }  
    }
}