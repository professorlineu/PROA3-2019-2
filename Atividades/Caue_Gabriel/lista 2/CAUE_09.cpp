/**********************************************************
- Autor:     Caue Gabriel
- Descrição: Lista 2 - Exercicio 9
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fBaseMaior = 0;
    float fBaseMenor = 0;
    float fAltura = 0;
    float fArea = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color B1");

    //Código do programa

    cout << "Digite o valor da base maior do trapézio:  ";
    cin >> fBaseMaior;

    cout << "Digite o valor da base menor:  ";
    cin >> fBaseMenor;

    cout << "Digite o valor da altura:  ";
    cin >> fAltura;

    fArea = ((fBaseMaior + fBaseMenor) * fAltura)/2;

    cout << "A Aréa do trapézio é igual à:  " << fArea << endl;

    return 0;
}
