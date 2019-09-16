/**********************************************************
- Autor:     Elbert Jean
- Descrição: Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A — azul; P — preto; V — verde; e
C — castanho) e a cor dos cabelos (P — preto; C — castanho; L — louro; e R — ruivo) de seis pessoas, e que
calcule e mostre:
a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
a média das idades das pessoas com altura inferior a 1,50 m;
a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
a quantidade de pessoas ruivas e que não possuem olhos azuis.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>
#include <ctype.h>


using namespace std;


int main()
{

    char colhos;
    char ccabelo;
    int iidade = 0;
    float fpeso = 0;
    float faltura = 0;
    int icont = 0;
    int ifirst = 0;
    int icont1 = 0;
    int icont2 = 0;
    int icont3 = 0;
    int icont4 = 0;
    int iporcentagem = 0;
    float fmedia = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout <<"\nCor dos olhos \t\t Cor do cabelo";
    cout <<"\n  A - Azul    \t\t   P - Preto";
    cout <<"\n  P - Preto   \t\t   C - Castanho";
    cout <<"\n  V - Verde   \t\t   L - Louro";
    cout <<"\n  C - Castanho   \t   R _ Ruivo";
    cout << endl << endl;

    while ( icont < 3)
    {
        ifirst++;
        cout <<"Insira a idade da " << ifirst << "º pessoa ";
        cin >> iidade;
        cout <<"Insira a altura da " << ifirst << "º pessoa (exemplo : 1.75) ";
        cin >> faltura;
        cout <<"Insira o peso da " << ifirst << "º pessoa (exemplo 65.8) ";
        cin >> fpeso;

      do
        {
            cout <<"Insira a cor dos olhos da " << ifirst << "º pessoa ";
            cin >> colhos;

            if (toupper(colhos) != 'A' && toupper(colhos) != 'P' && toupper(colhos) != 'V'&& toupper(colhos) != 'C' )

            {
                cout <<"\nCaractere inválido! Tente novamente!" << endl ;
                system("pause");
            }
        }

        while (toupper(colhos) != 'A' && toupper(colhos) != 'P' && toupper(colhos) != 'V'&& toupper(colhos) != 'C' );

        do
        {
            cout <<"Insira a cor do cabelo " << ifirst << "º pessoa ";
            cin >> ccabelo;
            cout << endl;

            if (toupper(ccabelo) != 'P' && toupper(ccabelo) != 'C' && toupper(ccabelo) != 'L' && toupper(ccabelo) != 'R' )

            {
                cout <<"\nCaractere inválido! Tente novamente!" << endl ;
                system("pause");
            }
        }

        while (toupper(ccabelo) != 'P' && toupper(ccabelo) != 'C' && toupper(ccabelo) != 'L'&& toupper(ccabelo) != 'R' );

        icont++;

        if (iidade >50 && fpeso <60)
        {
            icont1++;
        }

        if ( faltura < 1.50)
        {

            fmedia = fmedia + iidade;
            icont2++;
        }

        if (toupper(colhos) == 'A')
        {
            icont3++;

        }

        if(toupper(ccabelo) == 'R' && toupper(colhos) != 'A')
        {
           icont4++;
        }

    }

   if (icont1>0) // condição para pessoas com mais de 50 anos
    {
        cout <<"\nFoi inserido " << icont1 << " pessoas com idade superior a 50 anos e peso inferior a 60 kg";
        cout << endl;
    }
    else // condição para pessoas com mais de 50 anos
    {
        cout << "\nNão foi inserido pessoas com idade superior a 50 anos e/ou peso inferior a 60 kg " << endl;
    }

    if (icont2>0) // condição para pessoas com mais de 50 anos
    {
        cout << "\n" <<fmedia / icont2<<" é média das idades das pessoas com altura inferior a 1.50 m";
        cout << endl;

    }
    else // condição para pessoas com mais de 50 anos
    {
        cout << "\nNão foi inserido pessoas com a altura inferior a 1.50 m";
        cout << endl;
    }

    iporcentagem = (((float)icont3 / icont)* 100);

    if (icont3>0) // condição para pessoas com mais de 50 anos
    {
        cout <<"\nÉ de " << iporcentagem << "%" <<" a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas";
        cout << endl;

    }
    else // condição para pessoas com mais de 50 anos
    {
        cout << "\nNão foi inserido pessoas com os olhos azuis";
        cout << endl;
    }

    if (icont4>0) // condição para pessoas com mais de 50 anos
    {
        cout << endl << icont4 <<" é a quantidade de pessoas ruivas que não possuem olhos azuis";
        cout << endl;

    }
    else // condição para pessoas com mais de 50 anos
    {
        cout << "\nNão foi inserido pessoas ruivas que não possuem olhos azuis";
        cout << endl;
    }

}
