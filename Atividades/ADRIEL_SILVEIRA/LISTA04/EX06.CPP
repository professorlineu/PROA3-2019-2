/**********************************************************
- Autor:     Adriel Silveira
- Descrição: exercicio 6 lista 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    //Declaração de variáveis



    char ctrans  ;
    int icont = 0 ;
    float fval = 0 ;
    float fsoma = 0 ;
    float fsoma2 = 0 ;
    float fsoma3 = 0 ;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (icont < 3)
    {

        cout << "tabela de finanças da loja :\n " ;
        cout << "\n V: avista ; \n P: prazo; \n " ;

        cout << "\n digite qual o tipo de transacao: \n";
        cin  >> ctrans ;

        cout << endl ;
        cout << "qual o valor da transação: " ;
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
    cout << "valor total das compras á vista é : " << fsoma ;
    cout << endl ;
    cout << "valor total das compras á prazo é : " << fsoma2 ;
    cout << endl ;
    cout << "valor total de todas as compras é :" << fsoma3 ;
    cout << endl ;
    cout << "valor total das primeiras parcelas das compras a prazo é :" << fsoma2/3;
    cout << endl ;

    getch() ;

    return 0;
}

