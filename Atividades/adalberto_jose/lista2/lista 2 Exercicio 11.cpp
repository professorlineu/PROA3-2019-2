/**********************************************************
- Autor:     Adalberto Jos�
- Descri��o: Lista 2 Exercicio 11
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

       float fdiag1 = 0;
       float fdiag2 = 0;
       float fresultado = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "\nDigite o valor da diagonal maior: ";
      cin>> fdiag1;

     cout<<   "/nDigite o valor da diagonal maior: ";
    cin >> fdiag2;

    fresultado = (fdiag1 * fdiag2)/2;
    cout<<"\nValor da �rea do losango =";



    return 0;
}
