/**********************************************************
- Autor:     José Augusto
- Descrição: Lista 3 - Exercício 7 / acrescenta 30%
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    float fsal = 0;
    float faju = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "\nDigite o valor de seu salário:";
    cin >> fsal;

    if (fsal < 500)
{

    faju = fsal + (fsal * 30/100);


}
    else

    faju = fsal;

    cout << "\nO seu sálario total é de:" << faju;



    return 0;
}
