/**********************************************************
- Autor:     Gerson Flores de Souza
- Descri��o: lista2 exer14
**********************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float fNascimento = 0;
    float fanoatual = 0;
    float fanos = 0;
    float fmeses = 0;
    float fdias = 0;
    float fsemanas = 0;
    //Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do nascimento
    cout << "\nQual o ano do seu nascimento?: ";
    // Recebe o valor do ano de nascimento
    cin >> fNascimento;
    cout << "\nEm que ano estamos?: ";
    // Recebe o valor do ano de nascimento
    cin >> fanoatual;
    // Calcula o novo valor do produt
    fanos = fanoatual - fNascimento ;
    fmeses = (fanoatual - fNascimento)*12 ;
    fdias = (fanoatual - fNascimento)*365 ;
    fsemanas = ( fanoatual - fNascimento)*54;
    // Mostra o novo valor do produto
    cout << "\nA sua idade em anos � de " << fanos << " anos ";
    cout << "\nA sua idade em meses � de " << fmeses << " meses ";
    cout << "\nA sua idade em dias � de " << fdias << " dias ";
    cout << "\nA sua idade em semanas � de " << fsemanas << " semanas";
    // Para o programa a espera de um ENTER
    getch();
}
