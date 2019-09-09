/**********************************************************
- Autor:     Bruno Henrique
- Descri��o: Lista 4 - ex 10 / Soma dos n�meros primos e dos n�meros pares.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int inum = 0;
    int isomap = 0;
    int isomapri = 0;
    int itp = 0;
    int icp = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while ( i < 10)
    {
        cout << "\nDigite um n�mero:";
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
        } // fim da condi��o de primo

        if (icp == 2)
        {
            isomapri += inum;
        }

        icp = 0;

    } // fim do while

    cout << "\nA soma dos n�meros pares �: " << isomap;

    cout << "\nA soma dos n�meros primos �: " << isomapri;




    return 0;
}
