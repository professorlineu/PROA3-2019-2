/**********************************************************
- Autor:     Elbert Jean
- Descrição: Faça um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>


using namespace std;


int main()
{
    int i = 0;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    int i4 = 0;
    int i5 = 0;
    int iidade = 0;
    int iporcentagem = 0;
    int iporcentagem1 = 0;

    system("color F1"); // limpa a tela
    setlocale(LC_ALL,""); //Configuração da tela de saída

    while (i <= 7)

    {
        i++;

        cout <<"\nDigite a idade da " << i << "º pessoa ";
        cin >> iidade;

        if (iidade <=15)
        {
            i1++;
        }
        else if (iidade <=30)
        {
            i2++;
        }
        else if (iidade <=45)
        {
            i3++;
        }
        else if (iidade <=60)
        {
            i4++;
        }
        else if (iidade >60)
        {
            i5++;
        }

    }

    iporcentagem = (((float)i1 / i) *100);
    iporcentagem1 = (((float)i5 / i) *100);

    cout << "\n";
    cout << "FAIXA ETÁRIA \t\tIDADE \t\t\tQUANTIDADE" << endl;
    cout << "     1º      \t\tAté 15 anos \t\t     " << i1 << endl;
    cout << "     2º      \t\tDe 16 até 30 anos \t     " << i2 << endl;
    cout << "     3º      \t\tDe 31 até 45 anos \t     " << i3 << endl;
    cout << "     4º      \t\tDe 46 até 60 anos \t     " << i4 << endl;
    cout << "     5º      \t\tAcima de 60 anos  \t     " << i5 << endl;
    cout <<endl;
    cout << "\nA porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas é de " << iporcentagem << "%";
    cout << "\nA porcentagem de pessoas na última faixa etária com relação ao total de pessoas é de " << iporcentagem1 << "%";

    getch();
    return 0;
}

