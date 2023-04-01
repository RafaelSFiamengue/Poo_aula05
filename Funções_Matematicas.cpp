// Biblioteca usada
#include <iostream>
// Para facilitar o codigo
using namespace std;
// Função soma para o codigo rodar
int Soma(int a, int b);
// Função subtração para o codigo rodar
int Subt(int a, int b);
// Função multiplicação para o codigo rodar
int multi(int a, int b);
// Função divisão para o codigo rodar
int divi(int a, int b);
//Programa Principal
int main()
{
    //Variaveis para os valores das contas
    int a, b;
    //Pergunta para o usuario qual o primeiro valor
    cout << "Digite o valor de a: ";
    //Atribui o valor respondido para a variavel a
    cin >> a;
    //Pergunta para o usuario qual o segundo valor
    cout << "Digite o valor de b: ";
    //Atribui o valor respondido para a variavel b
    cin >> b;
    
    //Imprime o valor da soma
    cout << Soma (a,b) << endl;
    //Imprime o valor da subtração
    cout << Subt (a,b) << endl;
    //Imprime o valor da multiplicação
    cout << multi (a,b) << endl;
    //Imprime o valor da divisão
    cout << divi (a,b) << endl;
}
//Função soma
int Soma(int a, int b)
{
    //Variavel para o resultado
    int ResultSm;
    //Formula para calcular o resultado soma
    ResultSm = a + b;
    //Para o programa rodar
    return ResultSm;
}
//Função da subtração
int Subt(int a, int b) {
    //Variavel para o resultado
    int resultSb;
    //Formula para calcular o resultado da subtração
    resultSb = a - b;
    //Para o programa rodar
    return resultSb;
}
//Função da multiplicação
int multi(int a, int b) {
    //Variavel para o resultado
    int resultM;
    //Formula do resultado da multiplicação
    resultM = a * b;
    //Para o programa rodar
    return resultM;
}
//Função da divisão
int divi(int a, int b) {
    //Variavel para o resultado
    int resultD;
    //Formula do resultado da multiplicação
    resultD = a / b;
    //Para o programa rodar
    return resultD;
}