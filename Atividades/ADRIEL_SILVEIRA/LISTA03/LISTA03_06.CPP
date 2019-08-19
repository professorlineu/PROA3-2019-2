/**********************************************************
- Autor:     Adriel Silveira
- Descrição: exercicio 4 da lista de estrutura condicional
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


    float fnum1 = 0;

    float fnum2 = 0;

    int inum3 = 0;

    float fnum4 = 0;

    float fnum5 = 0;

    float fnum6 = 0;

    float fnum7 = 0;

    float fnum8 = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " \ninsira um primeiro valor 1: ";
    cin >> fnum1;

    cout << " \ninsira um segundo valor 2: ";
    cin >> fnum2;

    cout << " \n insira um numero entre 1 e 3: " ;
    cout << " \n opção 1 ( o primeiro elevado ao segundo) " ;
    cout<< "\n opção 2 ( raiz quadrada de cada um dos numeros )" ;
    cout << "\n opção 3 ( raiz cubica de cada um dos numeros ) " ;

    cin >> inum3;

    switch ( inum3 )
    {
    case 1 :
    {

        fnum6 = pow( fnum1,fnum2);

                cout<< "\n o primeiro elevado ao segundo é: "  << fnum6;
        break;
    }
    case 2 :
    {

        fnum4 = sqrt( fnum1);

                cout << "\n raiz quadrada do primeiro numero é :" <<fnum4 ;


        fnum5 = sqrt (fnum2);

                cout << "\n raiz quadrada do segundonumero é : " << fnum5 ;

        break;
    }
    case 3 :
    {
        fnum7 = cbrt(fnum1);

        cout<< "\n raiz cubica do primeiro numero é :" << fnum7;

        fnum8 = cbrt(fnum2);

        cout << "\n raiz cubica do segundo numero é :" << fnum8 ;

        break;
    }


    default:
cout << " \n operacao invalida ";

        }
    getch();

    return 0;
}
