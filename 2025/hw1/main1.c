#include <stdio.h>

int main(){
    char a[100];
    scanf("%s", a);
    int Sum =0;
    
    for(int i = 0;a[i] != '\0' ;i++){
        if(a[i] == a[i+1]){
            Sum++;
        }
        else 
        {
            Sum++;
            printf("%c%d",a[i],Sum);
            Sum = 0;
        }
    }
}