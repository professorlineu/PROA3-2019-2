/**********************************************************
- Autor:     Gerson Flores de Souza
- Descri��o: lista2 exer12
**********************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float fsalario1 = 0;
    float fsalario2 = 0;
    //Limpa a tela
    system("cls");
    // Ativa acentua��o
    setlocale(LC_ALL,"");
    // Mostra mensagem antes da leitura do sal�rio
    cout << "\nQual � o seu sal�rio?: ";
    // Recebe o valor do peso
    cin >> fsalario1;
    // Calcula o novo valor do produt
    fsalario2 = fsalario1 / 954 ;
    // Mostra o novo valor do produto
    cout << "\nVoc� recebe " << fsalario2 << " sal�rios m�nimo ";
    // Para o programa a espera de um ENTER
    getch();
}
