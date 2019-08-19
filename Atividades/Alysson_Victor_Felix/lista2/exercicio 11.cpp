/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição: Exercicio Proposto 11
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fbasemaior = 0;
    float fbasemenor = 0;
    float faltura = 0;
    float fareatrapez = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "O valor da base maior é: ";
    cin >> fbasemaior;

    cout << "O valor da base menor é: ";
    cin >> fbasemenor;

    cout << "O valor da altura é: ";
    cin >> faltura;

    fareatrapez = ((fbasemaior + fbasemenor) * faltura) / 2;

    cout << "O valor da area do trapezio é: " << fareatrapez;



    return 0;
}
