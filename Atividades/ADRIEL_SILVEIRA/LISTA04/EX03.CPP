/**********************************************************
- Autor:     Adriel Silveira
- Descrição: exercicio 3 lista 04
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



    int iIdade = 0 ;
    int icont1 = 0 ;
    int icont2 = 0 ;
    int icont3 = 0 ;
    int icont4 = 0 ;
    int icont5 = 0 ;
    int icont = 0 ;
    int iporcent = 0 ;
    int iporcent2 = 0 ;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (icont < 8)
    {

        cout << endl ;
        cout << "Digite a idade em anos: " ;
        cin  >> iIdade;
        cout << iIdade << "anos " <<endl ;


        icont ++ ;

        if ( iIdade <= 15 )

        {
            icont1 ++ ;

        }
        else if ( iIdade >= 16 && iIdade <= 30 )
        {
            icont2 ++ ;

        }

        else if ( iIdade >= 31 && iIdade <= 45 )
        {
            icont3 ++ ;

        }

        else if ( iIdade >= 46 && iIdade <= 60 )
        {
            icont4 ++ ;

        }

        else
        {
            icont5 ++ ;
        }


    }

    iporcent = ( ( (float)icont1 / icont ) *100 ) ;
    iporcent2 = ( ( (float)icont5 / icont ) *100 ) ;

    cout << endl;
    cout << "FAIXA ETÁRIA \tIDADE \t\t\t QUANTIDADE" << endl;
    cout << "1 \t\tAté 15 anos \t\t " << icont1 << endl;
    cout << "2 \t\tDe 16 a 30 anos \t " << icont2 << endl;
    cout << "3 \t\tDe 31 a 45 anos \t " << icont3 << endl;
    cout << "4 \t\tDe 46 a 60 anos \t " << icont4 << endl;
    cout << "5 \t\tAcima de 60 anos \t " << icont5 << endl;
    cout << endl ;
    cout << " porcentual de pessoas na primeira faixa etaria " << iporcent << "%" << endl ;
    cout << " porcentual de pessoas na ultima faixa etaria " << iporcent2 << "%" << endl ;





    getch() ;

    return 0;
}

