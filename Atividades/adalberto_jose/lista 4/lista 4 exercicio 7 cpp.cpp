/**********************************************************
- Autor:     Adalberto Jos�
- Descri��o: Lista 4 Exercicio 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int ii = 0;
    int iidade = 0;
    float faltura = 0;
    float fpeso = 0;

    int icont = 0;
    int icont1 = 0;
    int icont2 = 0;
    float fsoma = 0;
    int iporcentagem = 0;





    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    while (i <=2 )
    {

        ii++;



        cout<<"\nQual a idade da "<<ii<< " pessoa ? ";
        cin>>iidade;
        cout<<"\nQual a altura  da "<<ii<< " pessoa ? (exemplo : 1,78)" ;
        cin>>faltura;
        cout<<"\nQual o peso  da "<<ii<< " pessoa ? (exemplo : 63,5 )";
        cin>>fpeso;

        i++;

        if (iidade<50)
        {
            icont++;

        }

        else if (iidade<10 &&iidade<20)
        {

            fsoma = fsoma + faltura ;
            icont1++;
        }
        if (fpeso <40)
        {
            icont2++;
        }
    }
    if(icont> 0)
    {

        cout<<"\nA media das pessoas com idade entre 10 e  20 anos � de " <<fsoma/icont1;


    }
    else
    {
        cout<<"\nN�o foi inserido pessoas com idade entre 10 e 20 anos";
    }
    iporcentagem =(((float) icont2/i)*100);

    if (icont2<0)
    {
        cout<<"\nN�o foi inserido pessoas com peso inferior a 40 kg � de " << iporcentagem<<"%";
    }
    else
    {


        cout<<"\nN�o foi inserido pessoa com peso inferior a 40 kg " ;

    }










    return 0;
}


