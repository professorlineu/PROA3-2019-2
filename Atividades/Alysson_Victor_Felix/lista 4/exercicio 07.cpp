
/**********************************************************
- Autor:     Alysson Victor Felix
- Descrição:    Exercicio proposto 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fidade = 0;
    float faltura = 0;
    float fpeso = 0;
     int ipessoas = 0;
     int isoma = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

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
