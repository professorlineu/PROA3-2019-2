/**********************************************************
- Autor:     Clayton C Ribeiro e Robson Gomes Torres
- Descrição: Jogo da Velha
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int i = 0;
    char cUsuario = 0;
    char cComp = 0;
    int iUsuCol = 0, iUsuLin = 0;
    int iAleatColuna = 0, iAleatLinha = 0;
    char CJogoVelha[3][3] = {'A','B','C','D','E','F','G','H','I'};

    setlocale(LC_ALL,"");
    system("color F1");



    cout << "\n-------------------------------------------------\n";
    cout << "Bem Vindo ao JOGO DA VELHA.\n\n";
    cout << "By Clayton e Robson.\n";
    cout << "-------------------------------------------------\n\n";
    cout << "Escolha X (Xis) ou O (Bola) para jogar: ";
    cin >> cUsuario;        //Recebe a escolha do jogador
    cUsuario = toupper (cUsuario);


    // colocar um if para impedir que o programa rode com variável inválida.
      switch (cUsuario)
      {
        case 'X':
            cComp = 'O';
            break;

        case 'O':
            cComp = 'X';
            break;

        default:
            cout << "Categoria digitada inválida." << endl;
      }


      //for () condições para haver jogadas



    //Jogada do usuário

    cout << "Digite o número da linha: ";
    cin >> iUsuLin;

    cout << "Digite o número da coluna: ";
    cin >> iUsuCol;


    //Variável aleatória para o Computador

    srand(time(NULL)); //Evita que o número sorteado seja sempre o mesmo a cada execução
    iAleatColuna = rand() % 3; //Gera um número aleatório

    srand(time(NULL)); //Evita que o número sorteado seja sempre o mesmo a cada execução
    iAleatLinha = rand() % 3; //Gera um número aleatório


    cout << "O número sorteado foi: " << iAleatorio;


        cout << CJogoVelha << endl;
        cout << "Valor do usuário: " << cUsuario << endl; //Só para testar o programa
        cout << "Valor do computador: " << cComp << endl; //Só para testar o programa

	return 0;
}
