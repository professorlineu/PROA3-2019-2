/**********************************************************
- Autor:     Adalberto Jos�
- Descri��o: lista 3 exercicio 07
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
   float fsalario =0;
   float fsalarioreajus = 0;

    //Declara��o de vari�veis


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout<<" Digite o seu salario: ";
    cin>>fsalario;

    if ( fsalario < 500)
    {
     fsalarioreajus = fsalario * (1 + 0,3);
     cout<<"Seu novo salario ser� de : " <<fsalarioreajus ;

    }


     {
         cout<<" Seu salario n�o ter� reajuste. " ;
     }


    return 0;
}
