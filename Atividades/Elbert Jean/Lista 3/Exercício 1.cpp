/**********************************************************
- Autor: Elbert Jean
- Descrição: Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.
**********************************************************/

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float fn1 = 0;
    float fn2 = 0;
    float fn3 = 0;
    float fn4 = 0;
    float fresultado = 0;

    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do nascimento
    cout << "\nInsira o valor da primeira prova: ";
    cin >> fn1;
    cout << "\nInsira o valor da primeira prova: ";
    cin >> fn2;
    cout << "\nInsira o valor da primeira prova: ";
    cin >> fn3;
    cout << "\nInsira o valor da primeira prova: ";
    cin >> fn4;

    fresultado = (fn1 + fn2 + fn3 + fn4)/4;

    cout << "\nA média das suas notas é " << fresultado;
    // Para o programa a espera de um ENTER


   if (fresultado >= 7)
{

        cout << "\nParabéns, APROVADO! Você passou de ano, você é um sucesso!!!!";

}
  else
{

        cout << "\nVocê está REPROVADO! Nos vemos no próximo ano !!!!";

        getch();
        return 0;
}
}
