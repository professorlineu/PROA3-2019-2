/**********************************************************
- Autor:     Gerson Flores de Souza
- Descrição: lita2  exercício5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    //Declaração de variáveis
    int preco =0;
    int  resultado=0;
    int desconto = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "DIGITE O VALOR DO PRODUTO" << endl;
    cin>> preco;

    resultado= preco * .10 ;
    desconto= preco- resultado;

    cout <<"DESCONTO DE 10% DO PRODUTO" "\n" << desconto;

    getch () ;


    return 0;
}
