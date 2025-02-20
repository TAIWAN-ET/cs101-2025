#include <stdio.h>

int main() {
    double PI = 4.0f;
    int flag = 1;
    long ipi = 0;
    int x = 0;

    for(int i = 3; i <= 100000000; i += 2) {
        if(flag == 0) {
            PI += (4.0f/x);
            flag++;
        } 
        else {
            PI -= (4.0f/x);
            flag--;
        }
        ipi = PI*100000;
        if(ipi == 314159) {
            x = i;
            break;
        }

    }
    printf("%d %.5f", x, PI);
}
