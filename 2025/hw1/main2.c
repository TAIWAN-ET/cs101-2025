#include <stdio.h>

int main(){
   char a[100];
   scanf("%s", a);
   for (int i = 0; a[i] != '\0'; i++) {
     if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z') {
          int count = a[i + 1] - '0';
          for (int j = 0; j < count; j++) {
                printf("%c", a[i]);
          }
     }
 }
printf("\n");
   
}