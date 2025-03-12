#include <stdio.h>
#include <string.h>

char a[100];
char hex[17] ="0123456789ABCDEF";
int j = 4;
int main(){
    scanf("%s", a);
    int len = strlen(a);
    int num = 0;
    int num1 = 0;
    for(int i=0; i<4 ; i++){
        if(a[i] & 1){
            num = num + (1 << (3 - i));
        }
    }
    if(num != 0){
    printf("%c", hex[num]);
}
    for(int i=0; i<4 ; i++){
        if(a[i+j] & 1){
            num1 = num1 + (1 << (3 - i));
        }
    }
    printf("%c", hex[num1]);    
    printf("\n");
}    
