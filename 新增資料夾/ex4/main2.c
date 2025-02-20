#include <stdio.h>

int main() {
    double PI = 4.0f;
    int sign = -1;
    int flag = 0;
    int ipi = 0;

    for(int x = 3; x <= 100000000; x += 2) {
        PI += sign * (4.0f / x);
        sign *= -1;
        if ((-0.000001<PI - 3.14159) && (PI - 3.14159 < 0.000001)) {
            printf("%d\n", x);  
            break;
        }
        else{
            continue;
        }
      
    }

    printf("%f\n", PI);

    return 0;
}
