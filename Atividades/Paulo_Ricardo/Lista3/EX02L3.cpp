/**********************************************************
- Autor:     Paulo Ricardo
- Descri��o: Ex 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fnota1 = 0;
    float fnota2 = 0;
    float fmed = 0;

    cout << "Primeira nota:";
    cin >> fnota1;

    cout << "Segunda nota:";
    cin >> fnota2;

    fmed= (fnota1 + fnota2)/2;
    cout << "Sua nota:" << fmed;

    if (fmed<=3)
    {
        cout << "\n Reprovado";
    }
    if (fmed>=7)
    {
        cout << "\n Aprovado";
    }
    else
    {
        cout << "\n Exame";
    }








    //Configura��o da tela de sa�da

    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
