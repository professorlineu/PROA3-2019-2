/******************************************************************************************
- Autor:     Fabrício Nunes
- Descrição: Lista 4 - exercicio 4 - Programa que receba um número, calcule e mostre a tabuada desse número.
*******************************************************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()

{
    //Declaração de variáveis
    int i1 = 1;
    int i2 = 0;
    int iMult = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

   //Código do programa

    while (i1 <= 10)
   {
        while (i2 < 11)
        {
            iMult = i2 * i1;
            cout << i1 << " X " << i2 << " = " << iMult << endl;
                i2 = i2 + 1; //i++;

        }

        i2 = 0;
        i1 = i1 + 1; //i++;
        cout << endl;

   }

 return 0;
}

