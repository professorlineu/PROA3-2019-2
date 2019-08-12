/*******************************************************************
- Autor:        Robson Gomes Torres
- Descrição:    Lista 2 - Exercícios - 14
*******************************************************************/
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main ()
{
    int ano_atual, ano_nasc, id_atual, id_2050;
    // Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do ano de nascimento
    cout << "\n1982: ";
    // Recebe o ano de nascimento
    cin >> ano_nasc;
    // Mostra mensagem antes da leitura do ano atual
    cout << "\nDigite o ano atual: ";
    // Recebe o ano atual
    cin >> ano_atual;
    // Calcula a idade atual
    id_atual = ano_atual - ano_nasc;
    // Calcula a idade em 2050
    id_2050 = 2050 - ano_nasc;
    // Mostra a idade atual
    cout << "\nA idade atual: " << id_atual;
    // Mostra a idade em 2050
    cout << "\nA idade em 2050 ser: " << id_2050;
    // P ra o programa a espera de um ENTER
    getch();
}
