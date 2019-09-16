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
    int i = 0;
    int iVal = 0;
    int iMult = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

   //Código do programa
      cout << "Digite o número: ";
        cin >> iVal;
            cout << "Tabuada do número (" << iVal << ")" << endl;

   while (i < 11)
   {
        iMult = i * iVal;
            cout << iVal << " X " << i << " = " << iMult << endl;
                i = i + 1; //i++;

   }

 return 0;
}

