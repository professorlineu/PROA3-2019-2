/**********************************************************
- Autor:     Adalberto José
- Descrição: lista 3 exercicio 07
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
   float fsalario =0;
   float fsalarioreajus = 0;

    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout<<" Digite o seu salario: ";
    cin>>fsalario;

    if ( fsalario < 500)
    {
     fsalarioreajus = fsalario * (1 + 0,3);
     cout<<"Seu novo salario será de : " <<fsalarioreajus ;

    }


     {
         cout<<" Seu salario não terá reajuste. " ;
     }


    return 0;
}
