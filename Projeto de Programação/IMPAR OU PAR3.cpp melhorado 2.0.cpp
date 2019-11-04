/**********************************************************
- Autor:     Ronaldo Rodrigues  - Neriton Cavalheiro - Adalberto Moura.
- Descri��o: Lista 2 - Exerc�cio 3 - programa que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo
segundo. Sabe-se que o segundo n�mero n�o pode ser zero, portanto, n�o � necess�rio se preocupar
com valida��es
**********************************************************/
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    //Declara��o de vari�veis

    int iJogador1  =  0;
    int iJogador2  =  0;
    int iResultado = 0;
    int iEscolha1 = 0;
    int iEscolha2 = 0;
    char cOpcao = 's';
    //Configura��o da tela de sa�da

    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    while(cOpcao == 's')
    {

        cout<<"\nTabela de Pontua��o"<<endl;
        cout<<"\n\n\n\t\t\t\t\tBem-Vindo ao Jogo!\n\n\n\:";

        cout<<"Este � um jogo de par ou impar "<<endl;

        cout<<"Jogador 1, escolha impar (1) ou Par (2): ";
        cin>>iEscolha1;

        // cout<<"Jogador 2, escolha impar (1) ou Par (2): ";
        //cin>>iEscolha2;

        if (iEscolha1 == 1)
        {
            iEscolha2 = 2;
        }
        else
        {
            iEscolha2 = 1;
        }


        cout << "Jogador 1, digite um n�mero: ";
        cin  >> iJogador1;

        system("cls");


        cout<<"Jogador 2, digite um n�mero: "<<endl;
        cin  >> iJogador2;

        iResultado  = iJogador1  +  iJogador2;

        if (iResultado % 2 == 0 && iEscolha1 == 2)
        {
            cout << "Parab�ns, jogador 1 ganhou."<<endl;
        }
        else if (iResultado % 2 != 0 && iEscolha1 == 1)
        {
            cout << "Parab�ns, jogador 1 ganhou."<<endl;
        }
        else if (iResultado % 2 == 0 && iEscolha2 == 2)
        {
            cout << "Parab�ns, jogador 2 ganhou."<<endl;
        }
        else if (iResultado % 2 != 0 && iEscolha2 == 1)
            //while(cOpcao == 's')
        {
            cout << "Parab�ns, jogador 2 ganhou."<<endl;
        }

        /*
        se o jogador 1 escolher par e jogador 2 impar e resultado der par joagador 1 ganhou
        se o jogador 1 escolher impar e jogador 2 par e resultado der impar joagador 1 ganhou
        se o jogador 1 escolher par e jogador 2 impar e resultado der impar joagador 2 ganhou
        se o jogador 1 escolher iumpar e jogador 2 par e resultado der par joagador 2 ganhou

        */

        cout << "Resultado = "  <<  iResultado<<endl;

        cout << "Deseja Continuar? s/n: "<<endl;
        cin >> cOpcao;
    }
    cout<<"\n\tFim do Jogo!\n :";

    getch();
}


