/**********************************************************
- Autor:     Ronaldo Rodrigues
- Descrição:  Programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário Média - Diferencia - Produto - Divisão
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis


    float fnum1 = 0;

    float fnum2 = 0;

    float fnum3 = 0;

    float fmedia = 0;

    float fmaior = 0;

    float fsub = 0;

    float fmult = 0;

    float fdiv = 0 ;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \ninsira um primeiro valor 1: ";
    cin >> fnum1;

    cout << " \ninsira um segundo valor 2: ";
    cin >> fnum2;

    cout << " \n n:1(media) \n n:2(subtracao do maior pelo menor) \n n:3(multiplicacao) \n n:4(divisao) \n\ninsira um numero entre 1 e 4: ";

    cin >> fnum3;



    if ( fnum3 == 1  ) // CONDIÇÃO "CE"
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


            cout << " \n a subtracao do maior pelo menor é: " << fsub ;
        }
       else if ( fnum1 < fnum2 )
        {
            fmaior = fnum2 ;
            fsub = fmaior - fnum1 ;
            cout << "\n a subtracao do maior pelo menor é :" << fsub ;
        }

    }


    else if ( fnum3 == 3)
    {
        fmult = (fnum1 * fnum2 );

        cout << "\n a multiplicação entre os dois valores é :"  << fmult ;
    }

   else if (fnum3 == 4)
    {
        fdiv = (fnum1 / fnum2 ) ;

        cout << "\n a divisao do primeiro pelo segundo é :" << fdiv ;
    }

else
{

    cout << "\n operação invalida ";

    }
    getch();

    return 0;
}
