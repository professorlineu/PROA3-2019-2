#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <cmath>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{

    setlocale(LC_ALL,"");
    system("color F1");

    int iEscolha = 0;
    char cAlternativa;
    int iPont = 0;

    cout << "Bem vindo ao jogo!";

    Sleep(3000);
    system("cls");

    while ( iEscolha != 4 )
    {

    cout << "\nEscolha a dificuldade";

    Sleep(1000);
    system("cls");

    cout << "----------------------------\n\n";
    cout << "1 - Fácil\n" << endl;
    cout << "2 - Médio\n" << endl;
    cout << "3 - Difícil\n" << endl;
    cout << "4 - Sair\n" << endl;
    cout << "----------------------------\n\n";

    cout << "Opção: ";
    cin >> iEscolha;

    switch (iEscolha)
    {
    case 1:
        cout << "Você escolheu a dificuldade Fácil!";
        Sleep(2000);
        system("cls");

        cout << "1 - Você está participando de uma corrida e, \nantes de cruzar a linha de chegada, é ultrapassado pelo segundo colocado. Em que posição você fica?  " << endl;

        cout << "a) Segundo. " << endl;
        cout << "b) Terceiro. " << endl;
        cout << "c) Quarto. " << endl;
        cout << "d) Primeiro. " << endl;

        cin >> cAlternativa;

        if ( cAlternativa == 'a')
        {
           cout << "Parabéns você acertou!! " << endl;
           iPont++;
        }

        else
        {
            cout << " Sinto muito você errou!! " << endl;
        }

        Sleep(2000);
        system("cls");

        cout << " 2 - O que você coloca em uma torradeira?  " <<endl;

        cout << "a) Torrada. " << endl;
        cout << "b) Torresmo. " << endl;
        cout << "c) Bolo. " << endl;
        cout << "d) Pão. " << endl;

        cin >> cAlternativa;

        if ( cAlternativa == 'd')
        {
            cout << "Parabéns você acertou!! " << endl;
            iPont++;
        }

        else
        {
            cout << "Sinto muito você errou!! " << endl;
        }

        Sleep(2000);
        system("cls");

        cout << " 3 - Alguns meses têm 30 dias e outros 31. Quantos meses têm 28 dias durante um período de quatro anos?  " << endl;

        cout << "a) 36 meses. " << endl;
        cout << "b) 3 meses. " << endl;
        cout << "c) 48 meses. " << endl;
        cout << "d) 4 meses. " << endl;

        cin >> cAlternativa;

        if ( cAlternativa == 'c')
        {
            cout << "Parabéns você acertou!! " << endl;
            iPont++;
        }

        else
        {
            cout << " Sinto muito você errou!! " << endl;
        }

        Sleep(3000);

        system("cls");

        cout << "você acertou " << iPont << " perguntas" << endl;

        break;

    case 2:
        cout << "Você escolheu a dificuldade Médio!";
        Sleep(2000);
        system("cls");

        cout << "1 - De quem é a famosa frase 'Penso, logo existo' ? " <<endl;

        cout << "a) Platão. " << endl;
        cout << "b) Galileu Galilei. " << endl;
        cout << "c) Descartes. " << endl;
        cout << "d) Sócrates. " << endl;

        cin >> cAlternativa;

        if ( cAlternativa == 'c')
        {
            cout << "Parabéns você acertou!! " << endl;
            iPont++;
        }

        else
        {
            cout << "Sinto muito você errou!! " << endl;
        }

        Sleep(2000);
        system("cls");

        cout << "2 - Júpiter e Plutão são os correlatos romanos de quais deuses gregos? " <<endl;

        cout << "a) Ares e Hermes. " << endl;
        cout << "b) Zeus e Ares. " << endl;
        cout << "c) Cronos e Apolo. " << endl;
        cout << "d) Zeus e Hades. " << endl;

        cin >> cAlternativa;

        if ( cAlternativa == 'd')
        {
            cout << "Parabéns você acertou!! " << endl;
            iPont++;
        }

        else
        {
            cout << "Sinto muito você errou!! " << endl;
        }

        Sleep(2000);
        system("cls");

        cout << "3 - Em que data ocorreu o maior acidente radioativo do Brasil?" <<endl ;

        cout << "a) 17 de agosto de 1985." << endl;
        cout << "b) 13 de setembro de 1987." << endl;
        cout << "c) 11 de setembro de 2001." << endl;
        cout << "d) 2 de março de 1996." << endl;

        cin >> cAlternativa;

        if (cAlternativa== 'b')
        {
            cout << "Parabéns você acertou!!" <<endl;
            iPont++;
        }

        else
        {
             cout << "Sinto muito você errou!!" <<endl;
        }

        Sleep(2000);
        system("cls");

        cout << "4 - o sol nasce e se põe em que sentido" <<endl ;

        cout << "a) Sudeste > Noroeste" << endl;
        cout << "b) Oeste > Leste" << endl;
        cout << "c) Leste > Oeste" << endl;
        cout << "d) Nordeste > Sudoeste" << endl;

        cin >> cAlternativa;

        if (cAlternativa == 'c')
        {
            cout << "Parabéns você acertou!!" << endl;
            iPont++;
        }

         else
        {
             cout << "Sinto muito você errou!!" <<endl;
        }

        cout << "você acertou " << iPont << " perguntas" << endl;

        break;

    case 3:
        cout << "Você escolheu a dificuldade Difícil!";
        Sleep(2000);
        system("cls");

        cout << "1 - qual a velocidade da luz?  " << endl;

        cout << "a) 256.955 metros por segundo" << endl;
        cout << "b) 300.000 KM por segundo" << endl;
        cout << "c) 500.600 KM por segundo" << endl;
        cout << "d) 359.776 metros por segundo" << endl;

        cin >> cAlternativa;

        if (cAlternativa == 'b')
        {
            cout << "Parabéns você acertou!!" << endl;
            iPont++;
        }

        else
        {
             cout << "Sinto muito você errou!!" <<endl;
        }

        Sleep(2000);
        system("cls");

        cout << "2 - Na Segunda Guerra Mundial a bomba de uranio (Little Boy) foi lançada em Hiroshima,\nque dia aconteceu isso?" << endl;

        cout << "a) 19 de Setembro de 1945" << endl;
        cout << "b) 6 agosto de 1945" << endl;
        cout << "c) 6 de Fevereiro de 1945" << endl;
        cout << "d) 12 de março de 1945" << endl;

        cin >> cAlternativa;

        if (cAlternativa == 'b')
        {
            cout << "Parabéns você acertou!!" << endl;
            iPont++;
        }

        else
        {
             cout << "Sinto muito você errou!!" <<endl;
        }

        Sleep(2000);
        system("cls");

        cout << "3 - Qual foi o acontecimento que foi o estopim da Primeira Guerra" << endl;

        cout << "a) A invasão da Polônia" << endl;
        cout << "b) Japão conquista a China" << endl;
        cout << "c) Russia planta mísseis em Cuba apontados para os EUA" << endl;
        cout << "d) O assassinato do príncipe Francisco Ferdinando" << endl;

        cin >> cAlternativa;

        if (cAlternativa == 'd')
        {
            cout << "Parabéns você acertou!!" << endl;
            iPont++;
        }

        else
        {
             cout << "Sinto muito você errou!!" <<endl;
        }

        cout << "você acertou " << iPont << " perguntas" << endl;

        break;


    }//fim do swith
    }//fim do while
}
