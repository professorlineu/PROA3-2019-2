/**********************************************************
- Autor:     Paulo Ricardo
- Descri��o: Fa�a um programa que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int n1=0;
    int n2=0;
    int n3=0;
    int res=0;

    cin >> n1;
    cin >> n2;
    cin >> n3;


   res = n1*n2*n3;

    cout << "\n" << res;
    //Declara��o de vari�veis


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
