/**********************************************************
- Autor:     Adalberto Moura
- Descri��o: Lista2 Exercicio 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    float f_lado = 0;
    float f_area = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout<<"Digite o lado do quadrado ;"; // Recebe o valor do quadrado
    cin>> f_lado;

    f_area = f_lado * f_lado ; // Calcule o valor da �rea do quadrado
     cout << "\ n da area do quadrado � :"<<f_area;


    return 0;
}
