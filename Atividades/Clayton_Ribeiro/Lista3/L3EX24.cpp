/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 3 - Exercício 24
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    float fPreco = 0, fAumento = 0;
    float fPrecoNovo = 0;
    float fImposto = 0;
    int iCategor = 0;
    char cSituacao = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o preço do produto: ";     //Recebe o valor do preço do produto
    cin >> fPreco;

    cout << "\n----------------\n";
    cout << "1 - Limpeza.\n\n";
    cout << "2 - Alimentação.\n\n";
    cout << "3 - Vestuário.\n";
    cout << "----------------\n\n";
    cout << "Informe a categoria do produto conforme a lista acima: ";
    cin >> iCategor;        //Recebe a categoria do produto

    cout << "\n-------------------------------------------------\n";
    cout << "R - Produtos que necessitam de refrigeração.\n\n";
    cout << "N - Produtos que não necessitam de refrigeração.\n";
    cout << "-------------------------------------------------\n\n";
    cout << "Informe a situação do produto conforme a lista acima: ";
    cin >> cSituacao;        //Recebe a situação do produto
    cSituacao = toupper (cSituacao);


    if (fPreco <=25)            //Cálculo e exibição do valor do aumento
    {
      switch (iCategor)
      {
        case 1:
            fAumento = fPreco * (0.05);
            cout << "Valor do aumento: " << fAumento << endl;
            break;

        case 2:
            fAumento = fPreco * (0.08);
            cout << "Valor do aumento: " << fAumento << endl;
            break;

        case 3:
            fAumento = fPreco * (0.10);
            cout << "Valor do aumento: " << fAumento << endl;
            break;

        default:
            cout << "Categoria digitada inválida." << endl;
      }
    }

    else
    {
      switch (iCategor)
      {
        case 1:
            fAumento = fPreco * (0.12);
            cout << "Valor do aumento: " << fAumento << endl;
            break;

        case 2:
            fAumento = fPreco * (0.15);
            cout << "Valor do aumento: " << fAumento << endl;
            break;

        case 3:
            fAumento = fPreco * (0.18);
            cout << "Valor do aumento: " << fAumento << endl;
            break;

        default:
            cout << "Categoria digitada inválida." << endl;
      }
    }


    if (cSituacao != 'R' && cSituacao != 'N')            //Cálculo e exibição do valor do imposto
    {
        cout << "Situação digitada inválida." << endl;
    }

    else if (iCategor == 2 || cSituacao == 'R')
    {
        fImposto = fPreco * 0.05;
        cout << "Valor do imposto: " << fImposto << endl;
    }


    else
    {
        fImposto = fPreco * 0.08;
        cout << "Valor do imposto: " << fImposto << endl;
    }


    fPrecoNovo = fPreco + fAumento - fImposto;            //Cálculo e exibição do novo preço
    cout << "Novo preço do produto: " << fPrecoNovo << endl;

    if (fPrecoNovo <= 50)            //Classificação do novo preço
    {
        cout << "Classificação: Barato";
    }

    else if (fPrecoNovo > 50 && fPrecoNovo < 120)
    {
        cout << "Classificação: Normal";
    }

    else
    {
        cout << "Classificação: Caro";
    }


	return 0;
}
