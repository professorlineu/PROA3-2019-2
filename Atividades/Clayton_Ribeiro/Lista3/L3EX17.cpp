/**********************************************************
- Autor:     Clayton C Ribeiro
- Descri��o: Lista 3 - Exerc�cio 17
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int iSenha = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite a senha para valida��o: ";    // Recebe a senha
    cin >> iSenha;

    if (iSenha == 4531)     //Valida��o da senha
    {
        cout << "Acesso permitido!";

    }


    else        //Senha inv�lida
    {
        cout << "Acesso N�O permitido!";

    }

	return 0;
}
