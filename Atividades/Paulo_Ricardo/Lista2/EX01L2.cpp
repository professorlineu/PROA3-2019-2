/**********************************************************
- Autor:     Paulo Ricardo
- Descri��o: Fa�a um programa que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo
segundo. Sabe-se que o segundo n�mero n�o pode ser zero, portanto, n�o � necess�rio se preocupar
com valida��es.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int n1= 0;
    int n2= 0;
    int res= 0;

    cout << "\n Divis�o";

    cout << "\n Digite um numero";
    cin  >> n1;

    cout << "Digite um numero maior que 0";
    cin >> n2;

    res= n1/n2;

    cout << "\n =" << res;




    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa



    return 0;
}
