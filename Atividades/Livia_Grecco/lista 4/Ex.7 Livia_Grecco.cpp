/**********************************************************
- Autor:   Livia Grecco
- Descrição: Lista 4 - Ex. 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
   //Declaração de variáveis
   int i = 0;
   int iIdade = 0;
   float fAltura = 0;
   float fPeso = 0;
   int iClasse1 = 0;
   int iClasse2 = 0;
   int iClasse3 = 0;
   float fMedia = 0;
   float fSoma = 0;
   float fPorce = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    //Código do programa


    while (i < 3)
    {
      cout << "Digite a idade da pessoa: ";
      cin >> iIdade;

      cout << "Digite a altura da pessoa: ";
      cin >> fAltura;

      cout << "Digite o peso da pessoa:  ";
      cin >> fPeso;

    if ( iIdade > 50 )
    {
        iClasse1++;
    }

    if ( iIdade >= 10 && iIdade <= 20)
    {
        iClasse2++;

        fSoma = fSoma + fAltura;
    }

    if ( fPeso < 40 )
    {
       iClasse3++;
    }


      i++;
    }

    cout << "Pessoas com idade superior a 50 anos: " << iClasse1 << endl;

    fMedia = fSoma/iClasse2;

    cout << "Médias das altura entre 10 e 20 anos: " << fMedia << endl;


    fPorce = (iClasse3 * 100)/ i;

    cout << "Porcentagem de pessoas com peso inferior a 40kg: " << fPorce <<  endl;





    return 0;
}
