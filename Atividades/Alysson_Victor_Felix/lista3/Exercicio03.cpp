/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição: Exercicio proposto 3
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
    float fnummenor = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "O valor do primeiro numero é: ";
        cin >> fnum1;

    cout << "O valor do segundo numero é: ";
    cin >> fnum2;



    if (fnum1 > fnum2)
    {
       fnummenor = fnum2;

       cout << "O numero menor é: " << fnummenor;
    }


    else

        {
             fnummenor = fnum1;

           cout << " o numero menor é: " << fnummenor;

        }


        return 0;

}
