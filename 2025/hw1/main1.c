#include <stdio.h>

int main(){
    int Sum =0;
    char a[] = "AABBBCCCCddd";
    for(int i = 0;i < (sizeof(a)-1);i++){
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