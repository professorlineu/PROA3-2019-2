/**********************************************************
- Autor:     Elbert Jean
- Descri��o: Fa�a um programa que mostre as tabuadas dos n�meros de 1 a 10.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>


using namespace std;

int main()
{
    int itabuada = 0; //Declara��o de vari�veis
    int jmult = 0; //Declara��o de vari�veis
    int iresultado = 0; //Declara��o de vari�veis

    setlocale(LC_ALL,""); //Configura��o da tela de sa�da
    system("color F1"); // limpa a tela

    while (itabuada <=10) //C�digo do programa

    {
        cout << "\ntabuada do " << itabuada <<endl;

        while (jmult <=10) //C�digo do programa

        {

            iresultado = itabuada * jmult;

            cout << itabuada << " x " << jmult << " = " << iresultado << "\n";
            jmult++;

        } // fim do while / la�o

        itabuada++;
        jmult = 0;
    }


    return 0;
}
