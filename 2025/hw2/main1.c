# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>



int list_gen[7];

void lotte_gen(){
    for(int i = 0; i < 7; i++){
        list_gen[i] = rand() % 69+ 1;
        for(int j = 0; j < i; j++){
            if(list_gen[i] == list_gen[j]){
                i--;
                break;
            }
        }
    }
    for(int i = 0; i < 7; i++){
        printf("%02d ", list_gen[i]);
    }
    printf("\n");
}

int main(void){
    srand(1);
    int n;
    scanf("%d", &n);
    printf("========= lotto649 =========\n");
    for(int i = 1; i <= n; i++){
        printf("[%d]: ", i);
        lotte_gen();    
    }
    if(n != 5){
        for(int i = 1; i <= 5 - n; i++){
            printf("[%d]: ", n+i);
            printf("__ __ __ __ __ __ __\n");
    }
}
    printf("========= csie@CGU =========\n");
    FILE *file = fopen("lotto.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    fprintf(file, "========= lotto649 =========\n");
    for (int i = 1; i <= n; i++) {
        fprintf(file, "[%d]: ", i);
        for (int j = 0; j < 7; j++) {
            fprintf(file, "%02d ", list_gen[j]);
        }
        fprintf(file, "\n");
    }
    if (n != 5) {
        for (int i = 1; i <= 5 - n; i++) {
            fprintf(file, "[%d]: __ __ __ __ __ __ __\n", n + i);
        }
    }
    fprintf(file, "========= csie@CGU =========\n");
    fclose(file);
}