/******************************************************************************************
- Autor:     Fabr�cio Nunes
- Descri��o: Lista 4 - exercicio 4 - Programa que receba um n�mero, calcule e mostre a tabuada desse n�mero.
*******************************************************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()

{
    //Declara��o de vari�veis
    int i = 0;
    int iVal = 0;
    int iMult = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

   //C�digo do programa
      cout << "Digite o n�mero: ";
        cin >> iVal;
            cout << "Tabuada do n�mero (" << iVal << ")" << endl;

   while (i < 11)
   {
        iMult = i * iVal;
            cout << iVal << " X " << i << " = " << iMult << endl;
                i = i + 1; //i++;

   }

 return 0;
}

