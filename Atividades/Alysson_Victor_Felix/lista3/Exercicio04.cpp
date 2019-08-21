/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição: Exercicio proposto 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fnum1 = 0;
    float fnum2 = 0;
    float fnum3 = 0;
    float fnummaior = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "O valor do primeiro numero é: ";
        cin >> fnum1;

    cout << "O valor do segundo numero é: ";
    cin >> fnum2;

    cout << "O valor do terceiro numero é: ";
    cin >> fnum3;


    if (fnum1 >= fnum2)
    {
       fnummaior = fnum1;
    }


    else

        {
             fnummaior = fnum2;

        }

    if (fnum3 >= fnummaior)

    {
        fnummaior = fnum3;
    }

    cout << "O numero maior é: " << fnummaior << endl;
        return 0;

}
