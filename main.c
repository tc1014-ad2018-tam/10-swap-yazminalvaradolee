/* Este programa se basa en ordenar los numeros
 * de menor a mayor los 3 numeros que el usuario pida.
 *
 * Autora: Yasmin Alvarado Lee
 * correo: yazminalvlee@gmail.com
 * fecha:13 de septiembre de 2018
 *
*/
#include <stdio.h>

void order (int *a, int *k) {//Void significa que no tiene un valor
    int ord;

    if(*a > *k) {
        ord = *a;
        *a = *k;
        *k = ord;
    }
}

int main() {
    //Variables
    int num1;
    int num2;
    int num3;

    printf("Dame tu primer numero:\n");
    printf("Dame tu segundo numero:\n");
    printf("Dame tu tercer numero:\n");

    scanf("%i %i %i", &num1, &num2, &num3);//Los numeros que dio el usuario para acomodarlos

    //Las operaciones de el orden
    order(&num1, &num2);
    order(&num1, &num3);
    order(&num2, &num3);

    //LOS RESULTADOS
    printf("El menor:%i\n", num1);
    printf("El medio:%i\n",num2);
    printf("El numero mayor:%i\n",num3);

    return 0;
}