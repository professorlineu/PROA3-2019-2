/**********************************************************
- Autor:     Alysson
- Descri��o: exercicio 11 lista 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    //Declara��o de vari�veis



    float fvalor = 0 ;
    float favista = 0 ;
    float fparcela = 0 ;
    double ffinal = 0 ;
    int icont = 3 ;
    int icont2 = 3 ;





    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << fixed << setprecision(2) ;

    cout << "\ntabela de financiamento" ;
    cout << "\n\ndigite  o valor do veiculo que deseja fazer cota��o:" ;
    cin >> fvalor ;
    cout << endl;


    cout << "\nquantidade de parcelas \t Percentual de acrescimo sobre o preco final \t valor final \t\t valor da parcela" <<endl ;


    while (icont <= 30)

    {


        ffinal = fvalor + (fvalor * icont/100) ;

        fparcela = ffinal /(icont*2) ;

        cout << "\t" <<(icont*2)<< "\t\t\t\t" <<icont<< " % \t\t\t\t R$ "<<ffinal<< "\t\t R$ "<<fparcela<< endl;

        icont = icont + 3;
    }


    favista = fvalor - ( fvalor * 0.2 );


    cout << endl;
    cout << "\nvalor final avista com 20% de desconto: R$ "<<favista ;


    getch() ;

    return 0;
}

