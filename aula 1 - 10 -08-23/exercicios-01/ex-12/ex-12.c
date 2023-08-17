#include <stdio.h>
/*Passagem por valor*/
void troca(int a, int b)
{
    int c = a;
    a = b;
    b = c;
}

int main(void) {
    int x = 5;
    int y = 10;
    troca(x, y);
    printf("x = %d, y = %d ", x,y);
    return 0;
}
