#include <stdio.h>

int main(void){
    int i=0, j = 0;

    while(i != 1024){
        if(i%3 || i%5){
            j = i + j;
        }
        i++;
    }
    printf("%d\n", j);
    return (0);
}
