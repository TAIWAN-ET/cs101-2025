#include <stdio.h>

int main(){
    int num = 12345;
    int FirstDigit;
    int LastDigit = FirstDigit = num%10;

    while(num >= 10){
        num /= 10;
        FirstDigit = num%10;
    }
    printf("First %d + last %d = %d", FirstDigit, LastDigit, FirstDigit + LastDigit);
}