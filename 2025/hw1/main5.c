#include <stdio.h>


void printblank(int n) {
    for(int i = n; i > 0 ; i--){
        printf(" ");
    }
}
void printnum(int n) {
    for(int i = 0; i < n-1 ; i++){
        printf("%d ", n);
    }
}
    
int main(){
    int a;
    scanf("%d", &a);
    int b = a-1;
    for(int i = 1; i <= a; i++){
        printblank(b);
        printnum(i);
        printf("%d", i);
        printf("\n");
        b--;
    }

}