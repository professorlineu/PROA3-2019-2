/**********************************************************
- Autor:     Bruno Henrique
- Descrição: EX7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int iIdade = 0;
    float fAltura =0;
    float fPeso =0;
    int iPessoas1 =0;
    int iPessoas2 =0;
    int iPessoas3 =0;
    int iPorcen =0;
    float fSoma=0;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

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
        cout << "\nNão há pessoas com menos de 50 anos!";
    }

    if (iPessoas2 > 0)
    {
       cout << "\nA média de pessoas com idade entre 10 a 20 anos é de:"  << fSoma/iPessoas2;
    }

    else
    {
        cout  << "\nNão a pessoas com a idade entre 10 e 20 anos";
    }

    iPorcen = (((float)iPessoas3/i)*100);


    if (iPessoas3 > 0)
    {
        cout <<
         "\nA porcentagem de pessoas com peso inferior a 40kg é de" << iPorcen << "%";
    }

    else
    {
        cout << "\nNenhum dos pesos digitados foi inferior a 40kg";
    }

     return 0;
}
