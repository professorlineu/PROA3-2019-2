/**********************************************************
- Autor:     Caue Gabriel
- Descri��o: Lista 2 - Exercicio 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

   float fPesoKg = 0;
   float fPeso_em_gramas = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "Indique o peso do cidad�o:  ";
    cin >> fPesoKg;

    fPeso_em_gramas = fPesoKg * 1000;

    cout << "O peso do cidad�o em gramas �:  " << fPeso_em_gramas << endl;



    return 0;
}
