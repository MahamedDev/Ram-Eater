#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc ,char **argv){
    if(argc < 2){
        printf("Usage: %s <size_MB>\n",argv[0]);
        return 1;
    }

    if(atoll(argv[1]) <= 0){
        fprintf(stderr,"ValueError: Enter Number bigger than %d and do Not enter letters.\n",atoll(argv[1]));
        return 1;
    }

    size_t size = (size_t)1024 * 1024 * atoll(argv[1]);
    char* payload = malloc(size);
    if(payload == NULL){printf("malloc error");return 1;}
    memset(payload,'m',size-1);
    payload[size-1] = '\0';
    printf("I ate %s MB , Delicious !\n",argv[1]);
    printf("Press Enter to exit...");
    getchar();
    return 0;
}
