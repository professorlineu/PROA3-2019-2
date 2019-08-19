/**********************************************************
- Autor:     Clayton C Ribeiro
- Descrição: Lista 3 - Exercício 17
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


    cout << "Digite a senha para validação: ";    // Recebe a senha
    cin >> iSenha;

    if (iSenha == 4531)     //Validação da senha
    {
        cout << "Acesso permitido!";

    }


    else        //Senha inválida
    {
        cout << "Acesso NÃO permitido!";

    }

	return 0;
}
