/**********************************************************
- Autor:     José Augusto
- Descrição: Peso
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int peso=0;
    int resu1=0;
    int resu2=0;



    cout << "\nDigite seu peso:";
    cin >> peso;

    resu1 = peso + (peso * 0.15);


    cout << "\nEngordou 15%:" << resu1;

    resu2 = peso - (peso * 0.20);


    cout << "\nEmagreceu 20%:" << resu2;





    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa



    return 0;
}
