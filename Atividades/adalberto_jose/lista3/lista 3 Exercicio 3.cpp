/**********************************************************
- Autor:     Adalberto jose
- Descri��o: lista 3 um programa que receba 2 numeros e mostre o menor.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fnum1 = 0;
    float fnum2 = 0;
    float fmenor = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o primeiro numero: ";
    cin >> fnum1;

    cout << "\nDigite o segundo numero: ";
    cin >> fnum2;




    if (fnum1<=fnum2)
     {
       fmenor=fnum1;
     }


     else
     {
       fmenor=fnum2;

     }
    cout<<"\n o menor numero �:"<<fmenor;









    return 0;
}

