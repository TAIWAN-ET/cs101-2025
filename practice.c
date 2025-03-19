#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char list_gen[7];
int main() {
    for(int i=0; i < sizeof(list_gen) - 1; i++){
        for(int j=0; j<strlen(list_gen); j++){
            if(list_gen[i] == list_gen[j]){
                list_gen[i] = rand() % 70;
                j = 0;
            }
        }
        list_gen[i] = rand() % 70;
    }
    printf("%s\n", list_gen);
}
