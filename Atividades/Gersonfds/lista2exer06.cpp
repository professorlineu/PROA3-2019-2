/**********************************************************
- Autor:     Gerson Flores de Souza
- Descri��o: lista 2 exerc�cio 02
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
    int num003=0;
    int resultado=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "digite o primeiro n�mero" << endl;
    cin>> num001;
    cout << "digite o segundo n�mero" << endl;
    cin>> num002;
    cout << "digite o terceiro n�mero" << endl;
    cin>> num003;

    resultado = num001 * num002 * num003;

    cout << "\n" << resultado;




    return 0;
}
