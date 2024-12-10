#include <stdio.h>

int main() {
    int i = 12345;
    int first = i - (i/10)*10;
    int other = (i/10)*10;
    int third = (i-(i/10000*10000))/1000*1000;
    int ans = 1;
    if(i<1000){
        ans = first*1000 + other;
        printf("%d\n", ans);
    }
    else{
        other = i-first-third;
        ans = first*1000 + other + third/1000;
        printf("%d\n", ans);
    }

}