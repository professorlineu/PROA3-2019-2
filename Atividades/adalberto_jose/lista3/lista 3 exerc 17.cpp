/**********************************************************
- Autor:     Adalberto Jos�
- Descri��o: lista 3 exercicio 17
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



    //Declara��o de vari�veis


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout<<"\n Qual � a senha? ";
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
