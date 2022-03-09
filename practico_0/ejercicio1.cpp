#include <stdio.h>

/*
Escribir una función llamada PromClase con cinco parámetros de entrada (las calificaciones obtenidas)
y un parámetro de salida (la calificación promedio), que realice dicho cálculo
*/

//Minimo:
int min5 (int a, int b, int c, int d, int e){
    int menor = a;
    if (menor >= b) { menor = b; }
    if (menor >= c) { menor = c; }
    if (menor >= d) { menor = d; }
    if (menor >= e) { menor = e; }
    return menor;
}

void PromClase (int a, int b, int c, int d, int e, float &promedio) {
    int suma = a + b + c + d + e;
    float resultado = (suma - min5(a, b, c, d, e)) / 4.0;
    printf("\nEl promedio de las calificaciones es: %.2f\n",resultado);
    promedio = resultado;
}

int main() {
    int a, b, c, d, e;
    printf("\nIngrese las calificaciones: ");
    scanf("%i %i %i %i %i", &a, &b, &c, &d, &e);
    float promedio;
    PromClase(a, b, c, d, e, promedio);
    printf("\nEl promedio de las calificaciones es: %.2f\n",promedio);
    return 0;
}
