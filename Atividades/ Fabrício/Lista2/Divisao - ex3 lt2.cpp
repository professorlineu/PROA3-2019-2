/**********************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 2 - Exercício 3 - 2 variáveis de entrada e divisão dos mesmos não podendo dividir por 0
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    //Declaração de variáveis
   float fNum1 = 0;
   float fNum2 = 0;
   float fDivi = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o primeiro número: ";
    cin >> fNum1;

    while (fNum2 == 0)
    {
        cout << "Digite o segundo número: ";
        cin >> fNum2;
    }

    fDivi= fNum1 / fNum2;

    cout << "Resultado final:" << fDivi;


    return 0;
}
