/**********************************************************
- Autor:     Paulo Ricardo da Silva
- Descri��o: Exerc�cio 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int i2 = 0;
    int iidade = 0;
    float falt = 0;
    float fpes = 0;
    int icont0 = 0;
    int icont1 = 0;
    int icont2 = 0;
    float fsoma = 0;
    int ipor = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    while (i < 2)
    {
        i2++;

        cout << "\n Qual a altura da " << i2 << "� pessoa? ";
        cin >> falt;

        cout << "\n Qual o peso da " << i2 << "� pessoa?";
        cin >> fpes;

        cout << "\n Qual a idade da " << i2 << "� pessoa?";
        cin >> iidade;

        i++;

        if (iidade > 50)
        {
            icont0++;
        }
        else if (iidade > 10 && iidade <20)
        {
            fsoma = fsoma + falt;
            icont1++;
        }
        if (fpes < 40)
        {
            icont2++;
        }

    } // fim do while / la�o

    if (icont0 >0)
        {
            cout << "\n Pessoas com mais de 50 anos: \n" << icont0 << "\n";
        }
    else
    {
        cout << "\n N�o possui pessoas com mais de 50 anos! \n";
    }

    if (icont1 >0)
    {
        cout << "\n M�dia de pessoas com idade entre 10 e 20 anos �:" << icont1 << "\n" ;

    }
    else
    {
        cout << "\n N�o possui pessoas com idade entre 10 e 20 anos! \n";
    }

    ipor = (((float)icont2 / i) * 100);

    if (icont2>0)
    {
        cout << "\n Porcentagem de pessoas com peso maior que 40 quilos � de:" << ipor << "% \n";

    }
    else
    {
        cout << "\n N�o possui pessoas com peso inferior a 40 quilos!\n" ;
    }


    return 0;
}
