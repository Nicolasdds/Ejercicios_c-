#include <stdio.h>

/*
Escriba un procedimiento que calcule e imprima en pantalla todos los números primos entre dos enteros
positivos A y B cualesquiera.
*/

bool esPrimo(int num){
    bool esPrimo = true;
    int i = 2;
    if (num == 0 || num == 1) { esPrimo = false; }
     while (i <= (num /2 ) && esPrimo == true) {
         if (num%i == 0) { esPrimo = false; }
         i++;
     }
    return esPrimo;
}

void imprimirPrimos(int num1, int num2){
    int inicio = num1;
    int ultimo = num2;
    if (num1 > num2) { inicio = num2; ultimo = num1; }
    printf("Numeros primos entre %d y %d:\n", inicio, ultimo);
    for (int i = inicio; i <= ultimo; i++){
           if (esPrimo(i)) { printf("%i ", i); }
    }
    printf("\n");
}

int main() {
    int num1, num2;
    printf("Ingrese los numeros: \n");
    scanf("%i %i", &num1, &num2);
    imprimirPrimos(num1, num2);
    
    return 0;
}
