/**********************************************************
- Autor:Bruno Henrique
- Descri��o: Ex5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iNum =0, i = 0;
    int iMult= 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (i < 10)
{
    iNum++;

    cout  <<  "Digite tabuada a ser calculada: ";
    cin  >> iNum;

    while (i < 11)
   {
       iMult= i*iNum;
      cout << iNum << "x" << i << "=" << iMult << endl;
      i++;
   }

        i = 0;
}
    return 0;
}
