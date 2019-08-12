/**********************************************************
- Autor :  Elbert Jean
- Descrição: Exercício 4 - Cap03 Estrututas Sequenciais
**********************************************************/


#include <iostream>
#include <conio.h>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    float nota1, nota2, soma, media;
    //Limpa a tela
    system("cls");
    // Ativa acentuação
    setlocale(LC_ALL,"");
    //Formata a saída para duas casas decimais
    cout << setprecision(2);
    //Mostra mensagem antes da leitura das duas notas
    cout << "\nDigite as duas notas: ";
    // Recebe as duas notas
    cin >> nota1;
    cin >> nota2;
    // Soma as notas digitadas
    soma = nota1 + nota2;
    // Calcula a média
    media = soma/2;
    // Mostra o resultado da média
    cout << "\nMédia = " << media;
    // Para o programa a espera de um ENTER
    getch();
}
