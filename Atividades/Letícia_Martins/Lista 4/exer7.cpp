/**********************************************************
- Autor:     Let�cia da Silva Martins
- Descri��o: La�o de repeti��o/idade,altura e peso de cinco pessoas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int iidade = 0;
    float faltura = 0;
    float fpeso = 0;
    int iidade50 = 0;
    float imedia = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");


    while (i <3)
{
    i++;
        cout << "\nDigite a idade da "  << i << "� pessoa: ";
     cin  >> iidade;

     cout << "Digite a altura da " << i << "� pessoa: ";
     cin  >> faltura;

     cout << "Digite a peso da "  << i << "� pessoa: ";
     cin  >> fpeso ;


     if (iidade>50)
    {
    iidade50++;

    }
    {
    if(iidade >=10 && iidade <=20)
    }


    cout << " A quantidade de pessoas com idade superior a 50 anos � : " << iidade50 << endl;

    return 0;
}
