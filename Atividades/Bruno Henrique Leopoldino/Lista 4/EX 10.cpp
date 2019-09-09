/**********************************************************
- Autor:     Bruno Henrique
- Descrição: Lista 4 - ex 10 / Soma dos números primos e dos números pares.
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
    int isomap = 0;
    int isomapri = 0;
    int itp = 0;
    int icp = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while ( i < 10)
    {
        cout << "\nDigite um número:";
        cin >> inum;

        i++;

        if (inum % 2 == 0)
        {
            isomap += inum ;
        }

        itp = inum;

        while (itp <= inum && itp >= 1)
        {
            if (inum % itp == 0)
            {
              icp++;
            }

            itp--;
        } // fim da condição de primo

        if (icp == 2)
        {
            isomapri += inum;
        }

        icp = 0;

    } // fim do while

    cout << "\nA soma dos números pares é: " << isomap;

    cout << "\nA soma dos números primos é: " << isomapri;




    return 0;
}
