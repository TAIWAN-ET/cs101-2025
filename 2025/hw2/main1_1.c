#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    scanf("%d", &N);  

    FILE *fp = fopen("lotto.txt", "w");
    if (fp == NULL)
        return 1;

    srand(1);

    fprintf(fp, "========= lotto649 =========\n");

    for (int i = 1; i <= 5; i++) {
        fprintf(fp, "[%d]: ", i);
        if (i <= N) {
            int nums[7];
            int count = 0;
            while (count < 7) {
                int num = rand() % 69 + 1;
                int duplicate = 0;
                for (int j = 0; j < count; j++) {
                    if (nums[j] == num) {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate) {
                    nums[count++] = num;
                }
            }
            for (int j = 0; j < 7; j++) {
                fprintf(fp, "%02d", nums[j]);
                if (j < 6)
                    fprintf(fp, " ");
            }
            fprintf(fp, "\n");
        } else {
            fprintf(fp, "__ __ __ __ __ __ __\n");
        }
    }

    fprintf(fp, "========= csie@CGU =========");

    fclose(fp);
    return 0;
}