#include "stdio.h"
#include "string.h"

int main (){
    char it[1000000000], dc[2];

    while (strlen(gets(it)) > 0){
        gets(dc);

        printf("$");

        int comma = strlen(it) % 3;

        int i;
        for (i = 0; i < strlen(it); i++){
            if (comma == 0){
                comma = 3;
                if (i != 0) printf(",");
            }
            printf("%c", it[i]);
            comma--;
        }

        printf(".");
        if (strlen(dc) == 1)
            printf("0%c\n", dc[0]);
        else 
            printf("%s\n", dc);
    }
    return 0;
}
