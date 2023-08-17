#include <stdio.h>
/*Passagem por referência*/
void troca(int *a, int *b) {
int c = *a;
*a = *b;
*b = c;
}

int main(void) {
    int x = 5;
    int y = 10;
    printf("Antes da troca: x = %d, y = %d \n", x,y);
    troca(&x, &y);
    printf("Depois da troca: x = %d, y = %d \n", x,y);
    return 0;
}
