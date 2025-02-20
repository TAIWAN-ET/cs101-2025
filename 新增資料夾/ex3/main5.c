#include <stdio.h>

int main(){
    int i = 300;
    if(i <= 30){
        printf("免費\n");
    } 
    else {
        if (i % 30 != 0){
        int h = (i/30+1)*30;
            if(h > 240){
                printf("240元\n");
            }
            else
            {
                printf("%d元\n", h);
            }
        }
    }
}