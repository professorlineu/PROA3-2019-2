/**********************************************************
- Autor:     Jader Oliveira
- Descrição: Lista 4 - Ex 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>


using namespace std;

int main()
{
    int iTab = 0;
    int iMult = 0;
    int iResul = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    while (iTab <=10)

    {
        cout << "\ntabuada do " << iTab <<endl;

        while (iMult <= 10)

        {

            iResul = iTab * iMult;

            cout << iTab << " x " << iMult << " = " << iResul << "\n";
            iMult++;

        } // fim do while / laço

        iTab++;
        iMult = 0;
    }


    return 0;
}
