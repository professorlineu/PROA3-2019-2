 /**********************************************************
- Autor:   Livia Grecco
- Descri��o: Lista 4 - Ex. 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
   //Declara��o de vari�veis
   int i = 0;
   int iIdade = 0;
   int iFaixa1 = 0;
   int iFaixa2 = 0;
   int iFaixa3 = 0;
   int iFaixa4 = 0;
   int iFaixa5 = 0;
   int iPorcentagem = 0;
   int iPorcen1 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    //C�digo do programa


    while (i < 8)
{
    cout << "Digite a idade: ";
    cin >> iIdade;

    i++;

    if (iIdade <= 15)
    {
        iFaixa1++;
    }

    else if (iIdade >= 16 && iIdade <= 30)
     {
         iFaixa2++;
     }
    else if (iIdade >= 31 && iIdade <= 45)
     {
         iFaixa3++;
     }

    else if (iIdade >= 46 && iIdade <= 60)
     {
         iFaixa4++;
     }

     else
     {
         iFaixa5++;
     }
}
    cout << "1� Faixa Et�ria at� 15 anos: " << iFaixa1 << endl;
    cout << "2� Faixa Et�ria de 16 a 30 anos: " << iFaixa2 << endl;
    cout << "3� Faixa Et�ria de 31 a 45 anos: " << iFaixa3 << endl;
    cout << "4� Faixa Et�ria de 46 a 60 anos: " << iFaixa4 << endl;
    cout << "5� Faixa Et�ria acima de 60 anos: " << iFaixa5 << endl;

    iPorcentagem = (((float)iFaixa1 / i)* 100);
    iPorcen1 = (((float)iFaixa5 / i)* 100);

    cout << "\nA porcentagem de pessoas na primeira faixa et�ria com rela��o ao total de pessoas � de " << iPorcentagem << "%";
    cout << "\nA porcentagem de pessoas na �ltima faixa et�ria com rela��o ao total de pessoas � de " << iPorcen1 << "%";



    return 0;
}
