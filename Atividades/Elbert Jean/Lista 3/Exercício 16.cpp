/**********************************************************
- Autor: Elbert Jean
- Descri��o: Fa�a um programa que receba o sal�rio atual de um funcion�rio e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo sal�rio.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float fvalor = 0;
    float fresultado = 0;

    system("cls");
    setlocale(LC_ALL,"");

    cout << "\nQual o valor do produto? ";
    cin >> fvalor;

   if (fvalor <= 30)
    {

    cout << "\nInfelizmente voc� n�o conseguiu um desconto no seu produto! ";

    }

    else if (fvalor <= 100)
    {

    fresultado = fvalor - (fvalor * 10/100);
    cout << "\nParab�ns, voc� conseguiu um desconto de 10% no seu produto, seu novo pre�o � de " << fresultado << " reais";

    }

    else if (fvalor > 100)

    {

    fresultado = fvalor - (fvalor * 15/100);
    cout << "\nParab�ns, voc� conseguiu um desconto de 15% no seu produto, seu novo pre�o � de " << fresultado << " reais";

    }

    getch();
    return 0;

}
