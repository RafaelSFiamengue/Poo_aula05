//Biblioteca usada
#include <iostream>
//Biblioteca que chamamos para usar
using namespace std;
//Programa principal
int main() {
    //Variavel para num e i com o valor de 1 para i
    int num, i = 1;
    //Imprime qual numero o usuario quer
    cout << "Digite um numero natural: ";
    //Leitura do valor de num
    cin >> num;
    //Condicional para i ser menor ou igual ao num
    while (i <= num) {
        //Imprime a contagem dos numeros
        cout << i << " ";
        //Contador de 1 em 1
        i++;
    }
    

    return 0;
}