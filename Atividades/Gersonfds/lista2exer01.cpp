/**********************************************************
- Autor:     Gerson Flores de Souza
- Descri��o: lista 2 exercicio 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int num001=0;
    int num002=0;
    int sub=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "digite o primeiro n�mero" << endl;
    cin>> num001;
    cout << "digite o segundo n�mero" << endl;
    cin>> num002;

    sub = num001 - num002;

    cout << "resultado" << endl;
    cout << "\n" << sub;




    return 0;
}
