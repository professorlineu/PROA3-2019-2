/**********************************************************
- Autor:    Livia Grecco
- Descri��o: Lista 3 - Ex.2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fNota1 = 0;
    float fNota2 = 0;
    float fMedia = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Informe a nota 1: ";
    cin >> fNota1;

    cout << "Informe a nota 2: ";
    cin >> fNota2;

    // Calculo da m�dia aritm�tica
    fMedia = (fNota1+fNota2)/2;

    cout << "M�dia Aritm�tica: " << fMedia << endl;

    if ( fMedia < 3)

    cout << "Reprovado" << endl;

    else if ( fMedia < 7)

    cout << "Exame" << endl;

    else

    cout << "Aprovado" << endl;




    return 0;
}
