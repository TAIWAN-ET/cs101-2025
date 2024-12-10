#include <stdio.h>

int main() {
    double PI = 4.0f;
    int sign = -1;

    for(int x = 3; x <= 100000000; x += 2) {
        PI += sign * (4.0f / x);
        sign *= -1;
        if ((-0.000001<PI - 3.14159) && (PI - 3.14159 < 0.000001)) {
            break;
        }
        else{
            continue;
        }
    }

    printf("%f\n", PI);

    return 0;
}
