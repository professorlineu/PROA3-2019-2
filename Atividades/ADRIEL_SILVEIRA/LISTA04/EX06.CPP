/**********************************************************
- Autor:     Adriel Silveira
- Descri��o: exercicio 6 lista 04
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



    char ctrans  ;
    int icont = 0 ;
    float fval = 0 ;
    float fsoma = 0 ;
    float fsoma2 = 0 ;
    float fsoma3 = 0 ;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (icont < 3)
    {

        cout << "tabela de finan�as da loja :\n " ;
        cout << "\n V: avista ; \n P: prazo; \n " ;

        cout << "\n digite qual o tipo de transacao: \n";
        cin  >> ctrans ;

        cout << endl ;
        cout << "qual o valor da transa��o: " ;
        cin  >> fval ;

        if ( ctrans == 'v' )

        {
            fsoma = fsoma + fval ;

        }
        else
        {
            fsoma2 = fsoma2 + fval;
        }

        fsoma3 = fsoma3 +fval;

        icont++ ;
    }

    cout << endl;
    cout << "valor total das compras � vista � : " << fsoma ;
    cout << endl ;
    cout << "valor total das compras � prazo � : " << fsoma2 ;
    cout << endl ;
    cout << "valor total de todas as compras � :" << fsoma3 ;
    cout << endl ;
    cout << "valor total das primeiras parcelas das compras a prazo � :" << fsoma2/3;
    cout << endl ;

    getch() ;

    return 0;
}

