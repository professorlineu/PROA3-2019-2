/**********************************************************
- Autor:     Bruno Henrique
- Descri��o: EX7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int i = 0;
    int iIdade = 0;
    float fAltura =0;
    float fPeso =0;
    int iPessoas1 =0;
    int iPessoas2 =0;
    int iPessoas3 =0;
    int iPorcen =0;
    float fSoma=0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (i < 5)
    {
        cout << "\nIndique a Idade: ";
        cin >> iIdade;

        cout  << "\nIndique a Altura: ";
        cin >> fAltura;

        cout << "\nIndique o peso: ";
        cin >> fPeso;

        i++;

        if (iIdade >= 50)
        {
            iPessoas1++;
        }

        else if (iIdade > 10 && iIdade < 20)
        {
             fSoma = fSoma * fAltura;
       iPessoas1++;

        }
          if (fPeso < 40)
   {
     iPessoas3++;
   }
    }
    if (iPessoas1 > 0 )
    {
        cout << "\nPessoas com menos de 50:" << iPessoas1;
    }

    else
    {
        cout << "\nN�o h� pessoas com menos de 50 anos!";
    }

    if (iPessoas2 > 0)
    {
       cout << "\nA m�dia de pessoas com idade entre 10 a 20 anos � de:"  << fSoma/iPessoas2;
    }

    else
    {
        cout  << "\nN�o a pessoas com a idade entre 10 e 20 anos";
    }

    iPorcen = (((float)iPessoas3/i)*100);


    if (iPessoas3 > 0)
    {
        cout <<
         "\nA porcentagem de pessoas com peso inferior a 40kg � de" << iPorcen << "%";
    }

    else
    {
        cout << "\nNenhum dos pesos digitados foi inferior a 40kg";
    }

     return 0;
}
