/**********************************************************
- Autor:     Jos� Augusto
- Descri��o: Lista 4 - ex 5 / Tabuada do 1 ao 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int inum = 0, i = 0;
    int imult = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

   while (inum <= 10 )
 {

     cout << "\nTabuada: " << inum << endl;

     while (i <= 10)
     {
         imult = i * inum;
         cout << inum << " X " << i << " = " << imult << endl;
         i++;
     }
     i=0;
    inum++;
 }


    return 0;
}
