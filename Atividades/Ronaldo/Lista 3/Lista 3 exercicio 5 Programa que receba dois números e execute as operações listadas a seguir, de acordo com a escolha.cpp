/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descri��o:  Programa que receba dois n�meros e execute as opera��es listadas a seguir, de acordo com a escolha
do usu�rio M�dia - Diferencia - Produto - Divis�o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declara��o de vari�veis


    float fnum1 = 0;

    float fnum2 = 0;

    float fnum3 = 0;

    float fmedia = 0;

    float fmaior = 0;

    float fsub = 0;

    float fmult = 0;

    float fdiv = 0 ;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " \ninsira um primeiro valor 1: ";
    cin >> fnum1;

    cout << " \ninsira um segundo valor 2: ";
    cin >> fnum2;

    cout << " \n n:1(media) \n n:2(subtracao do maior pelo menor) \n n:3(multiplicacao) \n n:4(divisao) \n\ninsira um numero entre 1 e 4: ";

    cin >> fnum3;



    if ( fnum3 == 1  ) // CONDI��O "CE"
    {

        fmedia = ((fnum1 + fnum2) / 2 ) ;

        cout << " \n media entre os numeros digitados: " << fmedia ;
    }


     else if ( fnum3 == 2  )
    {

        if (fnum1 >= fnum2 )
        {
            fmaior = fnum1 ;

            fsub = fmaior - fnum2 ;


            cout << " \n a subtracao do maior pelo menor �: " << fsub ;
        }
       else if ( fnum1 < fnum2 )
        {
            fmaior = fnum2 ;
            fsub = fmaior - fnum1 ;
            cout << "\n a subtracao do maior pelo menor � :" << fsub ;
        }

    }


    else if ( fnum3 == 3)
    {
        fmult = (fnum1 * fnum2 );

        cout << "\n a multiplica��o entre os dois valores � :"  << fmult ;
    }

   else if (fnum3 == 4)
    {
        fdiv = (fnum1 / fnum2 ) ;

        cout << "\n a divisao do primeiro pelo segundo � :" << fdiv ;
    }

else
{

    cout << "\n opera��o invalida ";

    }
    getch();

    return 0;
}
