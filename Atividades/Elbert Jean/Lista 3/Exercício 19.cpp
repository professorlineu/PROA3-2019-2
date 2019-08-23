/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é a altura):
■■ para homens: (72.7 * h) – 58.
■■ para mulheres: (62.1 * h) – 44.7.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float faltura = 0;
    char csexo;
    float fresultado = 0;
    float fresultado1 = 0;

    system("cls");
    setlocale(LC_ALL,"");

    cout << "\nPara calcular o seu peso ideal, insira a sua altura: (exemplo: 1.60) ";
    cin >> faltura;
    cout << "\nQual o seu sexo ? ";
    cout << "\nInsira M para masculino e F para feminino ? ";
    cin >> csexo;

   switch ( toupper(csexo))

   case 'M':
    {

    fresultado = (72.7 * faltura) - 58;
    cout << "\nO seu peso ideal é de " << fresultado << " kgs";
    break;



   case 'F':

    fresultado1 = (62.1 * faltura) - 44.7;
    cout << "\no seu peso ideal é de " << fresultado1 << " kgs";
    break;

    }







    getch();
    return 0;

}
