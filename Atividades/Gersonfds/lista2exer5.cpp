/**********************************************************
- Autor:     Gerson Flores de Souza
- Descri��o: lita2  exerc�cio5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declara��o de vari�veis
    int preco =0;
    int  resultado=0;
    int desconto = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "DIGITE O VALOR DO PRODUTO" << endl;
    cin>> preco;

    resultado= preco * .10 ;
    desconto= preco- resultado;

    cout <<"DESCONTO DE 10% DO PRODUTO" "\n" << desconto;

    getch () ;


    return 0;
}
