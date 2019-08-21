/**********************************************************
- Autor:     Rodrigo D.SILVA
- Descrição: Saudação na tela
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h> // Nesta biblioteca temos o comando getch
using namespace std;

int main()
{
    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa


    cout << "AULA DE AUTOMAÇÃO!"; // o comando cout imprimi uma mensagem na tela.


    return 0;
}
