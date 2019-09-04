/**********************************************************
- Autor:     Lineu Lima
- Descrição: Laço de repetição
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    //Declaração de variáveis
    int itabuada = 0;
    int imult = 0;
    int iresul = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (itabuada <= 10)
    {
        cout << "\n Tabuada do:" << itabuada << endl;

        while ( imult <=10)
        {
            iresul = itabuada * imult;

            cout << itabuada << "x" << imult << "=" << iresul << endl;
            imult++;
        }
         itabuada++;
        imult=0;

    } // fim do while / laço




    return 0;
}
