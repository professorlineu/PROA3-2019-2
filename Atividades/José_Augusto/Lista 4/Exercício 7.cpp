/**********************************************************
- Autor:     Jos� Augusto
- Descri��o: Lista 4 - ex 7
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
    float fAltura = 0;
    float fPeso = 0;
    int ipessoas = 0;
    int ipessoas2 = 0;
    float fsoma = 0;
    int ipessoas3 = 0;
    int ipor = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    while ( i < 5)
    {
        cout << "\nDigite a idade:" ;
        cin >> iIdade;

        cout << "\nDigite a altura:";
        cin >> fAltura;

        cout << "\nDigite o peso:";
        cin >> fPeso;

     i++;

     if (iIdade > 50)
   {
      ipessoas++;
   }

   else if (iIdade >=10 && iIdade <=20)
   {
       ipessoas2++;
       fsoma = fsoma + fAltura;
   }

   if (fPeso < 40)
   {
     ipessoas3++;
   }
    } // Fim do while

    if (ipessoas > 0 )
    {
        cout << "\nPessoas com mais de 50:" << ipessoas;
    }

    else
    {
        cout << "\nN�o h� pessoas com mais de 50 anos!";
    }


    if (ipessoas2 > 0)
    {
       cout << "\nA m�dia de pessoas com idade entre 10 a 20 anos � de:"  << fsoma/ipessoas2;
    }

    else
    {
        cout << "\nN�o a pessoas com a idade entre 10 e 20 anos";
    }

    ipor = (((float)ipessoas3/i)*100);

    if (ipessoas3 > 0)
    {
        cout << "\nA porcentagem de pessoas com peso inferior a 40kg � de:" << ipor << "%";
    }

    else
    {
        cout << "\nNenhum dos pessos digitados foi inferior a 40kg";
    }




     return 0;
}
