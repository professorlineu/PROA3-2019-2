/**********************************************************
- Autor:     Adalberto jose
- Descrição: lista 3 um programa que receba 2 numeros e mostre o menor.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fnum1 = 0;
    float fnum2 = 0;
    float fmenor = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
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
    cout<<"\n o menor numero é:"<<fmenor;









    return 0;
}

