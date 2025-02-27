#include <stdio.h>

int main() {
    double PI = 4.0f;
    int sign = -1;
    int flag = 0;

    for(int x = 3; x <= 10000000; x += 2) {
        PI += sign * (4.0f / x);
        sign *= -1;
        if ((PI == 3.14159)) {
            printf("%d\n", x);
            break;
        }
        else{
            flag++;
            continue;
        }  

    }
    printf("%d\n", flag);
    printf("%f\n", PI);

    return 0;
}
