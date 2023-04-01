// Biblioteca usada
#include <iostream>
//Biblioteca que chamamos para usar
using namespace std;
//Programa principal
int main() {
    // Variavel para o valor num
    int num;
    // Faça
   do {
       //Imprime para o usuario escolher um numero de 1 a 10
       cout << "Digite um numero entre 1 a 10: ";
       //Leitura do numero que ele escolheu para num
       cin >> num;
       //Condicional para num ser menor que 1 ou maior que 10
   } while (num < 1 || num > 10);
   //Imprime para o usuario que ele escolheu errado
   cout << "Voce digitou o numero " << num << ".";
   
    return 0;
}