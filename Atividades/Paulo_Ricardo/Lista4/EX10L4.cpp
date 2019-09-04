/**********************************************************
- Autor:     Paulo Ricardo da Silva
- Descrição: Exercício 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int inum = 0;
    int ipar = 0;
    int ipri = 0;
    int irespar = 0;
    int irespri = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    while (i < 10)
    {
        cout << "\n Digite o numero:";
        cin >> inum;

        i++;

        if (inum % 2 == 0)
        {
            ipar += inum;
        }

        irespar = inum;

        while (irespar <= inum && irespar >= 1)
        {
            if (inum % irespar == 0)
            {
                irespri++;
            }
            irespar--;
        }
        if (irespri == 2)
        {
            ipri += inum;
        }
        irespri = 0;
    } // fim do while / laço

    cout << "\n A soma dos numeros pares é:" << ipar;

    cout << "\n Asoma dos numeros primos é:" << ipri;


    return 0;
}
