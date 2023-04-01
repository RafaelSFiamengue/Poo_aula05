// Biblioteca usada
#include <iostream>
// Biblioteca que chamamos para usar
using namespace std;
// Programa Principal
int main() {
    // Variavel de um numero inteiro para num
    int num;
    // Imprime para o usuario qual numero ele quer
   cout << "Digite um numero natural: ";
   // Valor que o num recebera
   cin >> num;
   //Imprime para o usuarios a quantidade de numeros pares que ele escolheu
   cout << "Os primeiros " << num << " numeros pares são: ";
   //Condição para aparecer a contagem de 2 em 2
   for (int i = 2; i <= num * 2; i += 2) {
       //Imprime o valor de i e a contagem dos numeros pares
       cout << i << " ";
   }
   
   
    return 0;
}