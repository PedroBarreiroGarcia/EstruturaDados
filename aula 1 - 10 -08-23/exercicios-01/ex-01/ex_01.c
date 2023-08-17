#include <stdio.h>
#include <math.h>

int main(void) {
    /*O índice de massa corporal (IMC) de uma pessoa é o seu peso dividido pelo
    quadrado de sua altura. Crie um programar calcular o IMC de uma pessoa. */

    float p, a, i;
    printf("Peso e altura?\n");
    scanf("%f %f",&p,&a);
    i = p/pow(a,2);
    printf("IMC = %.2f\n",i);
    return 0;
}
