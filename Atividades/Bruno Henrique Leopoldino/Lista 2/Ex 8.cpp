/**********************************************************
- Autor:     Bruno Henrique
- Descri��o: Desconto
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fPesoKG=0;
    float fPesoGramas=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Digite seu peso em Kg:  ";
    cin >> fPesoKG;

    fPesoGramas= fPesoKG * 1000;

    cout << "Seu peso em gramas �:  " << fPesoGramas;


    return 0;
}
