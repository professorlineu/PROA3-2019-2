/**********************************************************
- Autor:     Seu nome
- Descri��o: Breve descri��o do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int n1=0;
    int n2=0;
    int resu=0;

    cout << "\nDivisao";

    cout << "\nDigite um numero:";
    cin >> n1;

    cout << "\nDigite um numero que n�o seja 0:";
    cin >> n2;

    resu = n1/n2;

    cout << "\n = " << resu;
    //Declara��o de vari�veis


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
