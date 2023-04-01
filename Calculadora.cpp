// Biblioteca usada
#include <iostream>
// Para facilitar os codigos
using namespace std;
//Programa Principal
int main() {
    // Variavel para o tipo de operação
    char op;
    // Variavel para os valores que vamos usar
    float num1, num2;
    // Variavel para saber se o usuario quer repetir ou não
    char yn;
    // Condição para repetição
    while (yn != 'n') {
    
    //Imprime para o usuario qual operador ele quer usar
    cout << "Entre com o operador: +, -, *, /: ";
    //Leitura do operador que vai ser usado
    cin >> op;
    //Imprime para o usuario quais valores ele quer usar
    cout << "Entre com os dois valores: ";
    //Leitura dos valores que ele vai usar
    cin >> num1 >> num2;
    //Condicional das operações
    switch (op) {
        // Caso de soma
        case '+':
        //Imprime para o usuario o resultado da soma
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        //Quebra o resto
        break;
        // Caso de subtração
        case '-':
        //Imprime para o usuario o resultado da subtração
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        //Quebra o resto
        break;
        //Caso para multiplicação
        case '*':
        //Imprime para o usuario o resultado da multiplicação
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        //Quebra o resto
        break;
        //Caso para divisão
        case '/':
        //Imprime para o usuario o resultado da divisão
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        //Quebra o resto
        break;
        //Padrão
        default:
        //Imprime para o usuario se ele usar o operador que não existe
        cout << "Operador errado, Insira novamente o operador certo";
        //Quebra o resto
        break;
        
    }
    //Imprime se o usuario deseja continuar
    cout << "Deseja continuar? y ou n: ";
    //Leitura se ele quer continuar ou não 
    cin >> yn;
        
    }
    
    
    return 0;
}