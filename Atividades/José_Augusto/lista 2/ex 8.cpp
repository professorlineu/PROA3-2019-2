/**********************************************************
- Autor:     Jos� Augusto
- Descri��o: convers�o de peso p/ grama
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int peso=0;
    int resu=0;

    cout <<"\nDigite seu peso:";
    cin >> peso;

    resu = peso * 1000;

    cout << "\nSeu peso em gramas e:" << resu;


    //Declara��o de vari�veis


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
