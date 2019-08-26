/**********************************************************
- Autor:     Adalberto José
- Descrição: lista 3 exercicio 17
**********************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
   float fsenha = 0;



    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout<<"\n Qual é a senha? ";
    cin>>fsenha;

    if ( fsenha == 4531)
    {

     cout<<"\n Acesso permitido! " ;

    }


     {
         cout<<" \n Acesso negado! " ;
     }


    return 0;
}
