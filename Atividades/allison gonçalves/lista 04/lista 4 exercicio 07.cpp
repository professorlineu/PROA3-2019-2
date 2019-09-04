/**********************************************************

- Autor: Allison Gonçalves de Almeida

- Descrição: exercicio 7 lista 4



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







    float faltura = 0 ;



    float fpeso = 0 ;



    int iIdade = 0 ;



    float fmedia = 0 ;



    float fsoma = 0 ;



    float fsoma2 = 0 ;



    int icont = 0 ;



    int icont1 = 0 ;



    int icont2 = 0 ;



    int icont3 = 0 ;



    int iporcent = 0 ;









    //Configuração da tela de saída

    setlocale(LC_ALL,"");

    system("color F1");



    //Código do programa



    while (icont <3 )

    {



        cout << "\nPessoa: " << icont +1 ;

        cout << endl ;

        cout << "Digite a idade em anos: " ;

        cin  >> iIdade;



        cout << endl ;

        cout << "Digite a altura em metros: " ;

        cin  >> faltura;



        cout << endl ;

        cout << "Digite o peso em kilograma " ;

        cin  >> fpeso;







        icont ++ ;



        if ( iIdade > 50 )



        {

            icont1 ++ ;



        }



        else if ( iIdade >=10 && iIdade <= 20 )

        {

           fsoma = fsoma + faltura ;



            icont2 ++ ;



        }



        if ( fpeso < 40 )

        {



            icont3 ++ ;



        }



    }



    fmedia = (fsoma / icont2) ;

    iporcent = ( ( (float)icont3 / icont ) *100 ) ;



    cout << endl;



    cout << "\nQuantidade de pessoas com idade maior que 50 anos: " << icont1 << endl;



    cout << "\nMedia de altura das pessoas com idade entre 10 e 20 anos: " << fmedia << endl;



    cout << "\nPorcentual de pessoas com peso inferior a 40kg: " << iporcent << "%" << endl ;





    getch() ;



    return 0;

}

