/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float Nascimento,anoatual, anos, meses, dias, semanas;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do nascimento
    cout << "\nQual o ano do seu nascimento?: ";
    // Recebe o valor do ano de nascimento
    cin >> Nascimento;
    cout << "\nEm que ano estamos?: ";
    // Recebe o valor do ano de nascimento
    cin >> anoatual;
    // Calcula o novo valor do produt
    anos = anoatual - Nascimento ;
    meses = (anoatual - Nascimento)*12 ;
    dias = (anoatual - Nascimento)*365 ;
    semanas = ( anoatual - Nascimento)*54;
    // Mostra o novo valor do produto
    cout << "\nA sua idade em anos é " << anos << " anos ";
    cout << "\nA sua idade em meses é de " << meses << " meses ";
    cout << "\nA sua idade em dias é de " << dias << " dias ";
    cout << "\nA sua idade em semanas é de " << semanas << " semanas";
    // Para o programa a espera de um ENTER
    getch();
}
