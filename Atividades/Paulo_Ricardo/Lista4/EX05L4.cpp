/**********************************************************
- Autor:     Lineu Lima
- Descri��o: La�o de repeti��o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int itabuada = 0;
    int imult = 0;
    int iresul = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

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

    } // fim do while / la�o




    return 0;
}
