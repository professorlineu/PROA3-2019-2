/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o: Programa que receba dois n�meros e execute uma das opera��es
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    //Declara��o de vari�veis


    float fnum1 = 0;

    float fnum2 = 0;

    int inum3 = 0;

    float fnum4 = 0;

    float fnum5 = 0;

    float fnum6 = 0;

    float fnum7 = 0;

    float fnum8 = 0;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \ninsira um primeiro valor 1: ";
    cin >> fnum1;

    cout << " \ninsira um segundo valor 2: ";
    cin >> fnum2;

    cout << " \n insira um numero entre 1 e 3: " ;
    cout << " \n op��o 1 ( o primeiro elevado ao segundo) " ;
    cout<< "\n op��o 2 ( raiz quadrada de cada um dos numeros )" ;
    cout << "\n op��o 3 ( raiz cubica de cada um dos numeros ) " ;

    cin >> inum3;

    switch ( inum3 )
    {
    case 1 :
    {

        fnum6 = pow( fnum1,fnum2);

                cout<< "\n o primeiro elevado ao segundo �: "  << fnum6;
        break;
    }
    case 2 :
    {

        fnum4 = sqrt( fnum1);

                cout << "\n raiz quadrada do primeiro numero � :" <<fnum4 ;


        fnum5 = sqrt (fnum2);

                cout << "\n raiz quadrada do segundonumero � : " << fnum5 ;

        break;
    }
    case 3 :
    {
        fnum7 = cbrt(fnum1);

        cout<< "\n raiz cubica do primeiro numero � :" << fnum7;

        fnum8 = cbrt(fnum2);

        cout << "\n raiz cubica do segundo numero � :" << fnum8 ;

        break;
    }


    default:
cout << " \n operacao invalida ";

        }
    getch();

    return 0;
}
