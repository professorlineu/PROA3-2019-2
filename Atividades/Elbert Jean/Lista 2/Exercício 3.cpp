/**********************************************************
- Autor :  Elbert Jean
- Descri��o: Exerc�cio 4 - Cap03 Estrututas Sequenciais
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
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    //Formata a sa�da para duas casas decimais
    cout << setprecision(2);
    //Mostra mensagem antes da leitura das duas notas
    cout << "\nDigite as duas notas: ";
    // Recebe as duas notas
    cin >> nota1;
    cin >> nota2;
    // Soma as notas digitadas
    soma = nota1 + nota2;
    // Calcula a m�dia
    media = soma/2;
    // Mostra o resultado da m�dia
    cout << "\nM�dia = " << media;
    // Para o programa a espera de um ENTER
    getch();
}
