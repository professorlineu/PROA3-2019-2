
/**********************************************************
- Autor:     Alysson Victor Felix
- Descri��o:    Exercicio proposto 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fidade = 0;
    float faltura = 0;
    float fpeso = 0;
     int ipessoas = 0;
     int isoma = 0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (ipessoas < 2)
       {

cout << endl;

    cout << "Digite a idade em anos desejada: ";
    cin >> fidade;

    cout << "Digite a altura em metro desejada: ";
    cin >> faltura;


   cout << "Digite o peso em kilos desejado: ";
   cin >> fpeso;


   if (fidade > 50)
   {
       isoma++;
   }
       ipessoas ++;
   }

    cout << "Quantidade de pessoas com idade superior a 50: " << isoma;








    return 0;
}
