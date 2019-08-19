/**********************************************************
- Autor: Fabricio Nunes
- Descrição: Lista 2 - Exercício 3 - Recebe um preço e dá desconto de 10%
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
   float fDesc = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Digite o valor do produto:R$ ";
    cin >> fNum1;

    fDesc = fNum1 - (fNum1 * 0.1);

    cout << "Valor final do produto com 10% de desconto:R$ " << fDesc;


    return 0;
}
