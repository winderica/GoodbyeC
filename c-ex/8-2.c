#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]) {
    char ch;
    FILE * fp;
    if (argc != 3) {
    printf("Arguments error!\n");
        exit(-1);
    }
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Can't open %s file!\n", argv[1]);
        exit(-1);
    }
    freopen(argv[2], "w", stdout);
    while ((ch = fgetc(fp)) != EOF) putchar(ch); // 加括号
    fclose(fp);
    return 0;
}

