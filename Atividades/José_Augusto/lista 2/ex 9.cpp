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
    int baseM=0;
    int basem=0;
    int alt=0;
    int resu=0;

    cout <<"\nArea do Trapesio";

    cout << "\nDigite a base maior do trapezio:";
    cin >> baseM;

    cout << "\nDigite a base menor do trapezio:";
    cin >> basem;

    cout << "\nDigite a altura:";
    cin >> alt;

    resu = (( baseM + basem) * alt)/2;

    cout << "\nA area do trapezio e:" << resu;




    //Declara��o de vari�veis


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
