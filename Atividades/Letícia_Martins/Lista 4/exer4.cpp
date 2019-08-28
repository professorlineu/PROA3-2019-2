/**********************************************************
- Autor:     Letícia da Silva Martins
- Descrição: Laço de repetição/Tabuada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int ivalor = 0;
    int imult = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

     cout << "Digite o valor desejado: ";
     cin  >> ivalor ;

    //Código do programa
    while (i <11)
    {
        imult = i * ivalor;
        cout << ivalor << " X " << i << " = " << imult << endl;

        i = i + 1;








    } // fim do while / laço


    return 0;
}
