/**********************************************************
- Grupo:    Alysson Félix, Cauê Gabriel e Fabrício Nunes
- Descrição: Adivinhe a Senha - v 1.0
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    //Declaração de variáveis

    int i = 0;
    int iDificul = 0;
    int iAleatorio = 0;
    int iCaracter1 = 2;
    int iCaracter2 = 5;
    int iCaracter3 = 8;
    int iCaracter4 = 2;
    int iCaracter5 = 0;
    int iCaracter6 = 1;
    int iCaracter7 = 4;
    int iCaracter8 = 4;
    int iCaracter9 = 9;
    int iCaracter10 = 2;
    int iCaracter11 = 3;
    int iTent1 = 0;
    int iTent2 = 0;
    int iTent3 = 0;
    int iTent4 = 0;
    int iSenha1 = 258;
    int iSenha = 0;
    int iSenha2 = 2014;
    int iSenha3 = 4923;
    int isair = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color 0");

    //Código do programa

    cout << "\n\n\n\t\t####################################################################################" << endl;
    cout << "\t\t#                                                                                  #" << endl;
    cout << "\t\t#  ######   ######   ###     ##         ##       # ##  ###   ##  ######    ######  # " << endl;
    cout << "\t\t#  ##   ##  ##       ## #  ## #          ##     #  ##  ## #  ##  ##    #   ##   #  # " << endl;
    cout << "\t\t#  #####    ###      ##  ##   #   ####    ##   #   ##  ##  # ##  ##     #  ##   #  # " << endl;
    cout << "\t\t#  ##   ##  ##       ##       #            ## #    ##  ##   ###  ##    #   ##   #  # " << endl;
    cout << "\t\t#  ######   ######   ##       #             ##     ##  ##    ##  ######    ######  # " << endl;
    cout << "\t\t#                                                                                  # " << endl;
    cout << "\t\t####################################################################################" << endl;


    Sleep(2000);

    system("cls");

    cout << "\n\n\n\t\t###############################################################################################" << endl;
    cout << "\t\t#                                                                                             #" << endl;
    cout << "\t\t#  ##### ####   #       # # ##   # #   # ######    #####    #####  ###### #    # #   # #####  #" << endl;
    cout << "\t\t#  #   # #   #   #     #  # # #  # #   # #         #   #   ##    # #      # #  # #   # #   #  #" << endl;
    cout << "\t\t#  ##### #    #   #   #   # #  # # ##### ####      #####     ###   ####   #  # # ##### #####  #" << endl;
    cout << "\t\t#  #   # #   #     # #    # #   ## #   # #         #   #   #    ## #      #   ## #   # #   #  #" << endl;
    cout << "\t\t#  #   # ####       #     # #    # #   # ######    #   #    #####  ###### #    # #   # #   #  #" << endl;
    cout << "\t\t#                                                                                             #" << endl;
    cout << "\t\t###############################################################################################" << endl;
    cout << "\t\t                                                                                               " << endl;
    cout << "\t\t                                                                                              " << endl;
    cout << "\t\t                                         ##########                                           " << endl;
    cout << "\t\t                                       #####     ####                                         " << endl;
    cout << "\t\t                                      ####  ####  ####                                        " << endl;
    cout << "\t\t                                     ###########  #####                                       " << endl;
    cout << "\t\t                                     #########  #######                                       " << endl;
    cout << "\t\t                                     ########  ########                                       " << endl;
    cout << "\t\t                                      ################                                        " << endl;
    cout << "\t\t                                       ######  ######                                         " << endl;
    cout << "\t\t                                         ##########                                           " << endl;


    Sleep(3000);

    system("cls");


    do
    {
        cout << "\n\n\n\t\t\t\t\tSeleciono o modo de jogo :\n\n\n ";

        cout << "\t\t\t\t--------------------------------------------" << endl;
        cout << "\t\t\t\t\t1 -> Normal" << endl;
        cout << "\t\t\t\t\t2 -> Intermediário" << endl;
        cout << "\t\t\t\t\t3 -> Avançado" << endl;
        cout << "\t\t\t\t\t4 -> Informações sobre o jogo" << endl;
        cout << "\t\t\t\t\t5 - Sair" << endl;
        cout << "\t\t\t\t--------------------------------------------";

        cout << "\n\n\t\t\t\tEscolha o nível de dificuldade: ";
        cin >> iDificul;

        system("cls");

        switch (iDificul)
        {
        case 1:

            cout << "\n Você escolheu o nível de dificuldade Normal " << endl;
            cout << "----------------------------------------------" << endl;
            cout << "\n Advinhe a senha (Contém apenas 3 dígitos) >> ";
            cin >> iSenha;

            if (iSenha != iSenha1) // if da tentativa 1
            {
                system("cls");

                cout << "\n\tSenha Inválida! " << endl;
                cout << "\t----------------" << endl;

                cout << "\n Dica 1 - o PRIMEIRO dígito da senha é a Raiz Quadrada de '4'! " << endl;
                cout << "----------------------------------------------------------------" << endl;

                do
                {
                    cout << "\nInsira a resposta aqui >> ";
                    cin >> iTent1;
                    i++;
                }
                while (iTent1 != iCaracter1 && i < 2);

                i = 0;

                if (iTent1 == iCaracter1) // if da tentativa 2
                {
                    system("cls");

                    cout << "\n Muito bem, você acertou o Primeiro dígito! " << endl;
                    cout << "--------------------------------------------" << endl;

                    cout << "\n Dica 2 - o SEGUNDO dígito equivalente à (3²)-4 " << endl;
                    cout << "                             -------------------" << endl;
                    cout << " Vamos ver se você consegue!! " << endl;
                    cout << "-----------------------------" << endl;

                    do
                    {
                        cout << "\nInsira a resposta aqui >> ";
                        cin >> iTent2;
                        i++;
                    }
                    while(iTent2 != iCaracter2 && i < 2);

                    i = 0;

                    if (iTent2 == iCaracter2) // if da tentativa 3
                    {
                        system("cls");

                        cout << "\n\t\tParabéns, você está quase la! " << endl;
                        cout << "\t\t--------------------------------" << endl;

                        cout << "\nDica 3 - o TERCEIRO digito da senha é: " << " | 1° dígito + 2°dígito    |" << "\n\t\t\t\t\t| Multiplicado por 2      |" << "\n\t\t\t\t\t| MAIS 2 , Dividido por 2 |" << endl;

                        do
                        {
                            cout << "\nInsira a resposta aqui >> ";
                            cin >> iTent3;
                            i++;
                        }
                        while(iTent3 != iCaracter3 && i < 2);

                        i = 0;

                        if (iTent3 == iCaracter3) // if da tentativa 4
                        {
                            system("cls");

                            cout << "\nEntão a Senha é: " << endl;
                            cout << "-------------------" << endl;

                            do
                            {
                                cout << ">> ";
                                cin >> iSenha;
                                i++;
                            }
                            while(iSenha != iSenha1 && i < 2);

                            i = 0;

                            if (iSenha == iSenha1)
                            {
                                system("cls");

                                cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

                                Sleep(1500);

                                system("cls");

                                cout << "\n\n\n\t\t\t\t\tPARABÉNS!!" << endl;

                                Sleep(1500);

                                system("cls");
                            }
                            else
                            {
                                system("cls");

                                cout << "\n\n\n\t\t\t\t\tGame Over!! você falhou \n\n\n\n\n";

                                Sleep(1500);

                                system("cls");
                            }
                        }
                        else
                        {
                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tVocê Chegou Perto!  \n\n\n\n\n";

                            Sleep(1500);

                            system("cls");
                        }

                    }
                    else // else da terceira condição
                    {
                        system("cls");

                        cout << "\n\n\n\t\t\t\t\tGame Over!! você falhou \n\n\n\n\n";

                        Sleep(1500);

                        system("cls");
                    }
                }
                else // else da segunda condição
                {
                    system("cls");

                    cout << "\n\n\n\t\t\t\t\tGame Over!! você falhou \n\n\n\n\n" << endl;

                    Sleep(1500);

                    system("cls");
                } // else do if da tentativa 1


            }
            else // else da primeira condição
            {
                system("cls");

                cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

                Sleep(1500);

                system("cls");

                cout << "\n\n\n\t\t\t\t\tPARABÉNS!!" << endl;

                Sleep(1500);

                system("cls");
            }
            break;

        case 2:

            cout << "\n Você escolheu o nível de dificuldade Intermediário " << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "\nAdvinhe a senha (Contém 4 dígitos) >> ";
            cin >> iSenha;

            if (iSenha != iSenha2 )
            {
                system("cls");

                cout << "\n\tSenha Inválida! " << endl;
                cout << "\t---------------" << endl;

                cout << "\n Dica 1 - o PRIMEIRO digito é a conversão deste número '10' (binário) para decimal" << endl;
                cout << "------------------------------------------------------------------------------------" << endl;

                do
                {
                    cout << "\nInsira a resposta aqui >> ";
                    cin >> iTent1;
                    i++;
                }
                while(iTent1 != iCaracter4 && i < 2);

                i = 0;

                if (iTent1 == iCaracter4) // if da 1° condição
                {
                    system("cls");

                    cout << "\nMuito bem, você acertou o Primeiro dígito! " << endl;
                    cout << "--------------------------------------------" << endl;

                    cout << "\n Dica 2 - o SEGUNDO dígito é a Quantidade de mundiais que o Palmeiras tem " << endl;
                    cout << "----------------------------------------------------------------------------" << endl;

                    do
                    {
                        cout << "\nInsira a resposta aqui >> ";
                        cin >> iTent2;
                        i++;
                    }
                    while(iTent2 != iCaracter5);

                    i = 0;

                    if (iTent2 == iCaracter5) // if da 2° condição
                    {
                        system("cls");

                        cout << "\n Dica 3 - o TERCEIRO digito da senha está no meio desta frase 'It was one good game'" << endl;
                        cout << "--------------------------------------------------------------------------------------" << endl;

                        do
                        {
                            cout << "\nInsira a resposta aqui >> ";
                            cin >> iTent3;
                            i++;
                        }
                        while(iTent3 != iCaracter6 && i < 2);

                        i = 0;

                        if (iTent3 == iCaracter6) // if da 3° condição
                        {
                            system("cls");

                            cout << "\n Dica 4 - o QUARTO digito é a quantidade de copas do mundo da seleção da Alemanha " << endl;
                            cout << "-----------------------------------------------------------------------------------" << endl;

                            do
                            {
                                cout << "\nInsira a resposta aqui >> ";
                                cin >> iTent4;
                                i++;
                            }
                            while(iTent4 != iCaracter7);

                            i = 0;

                            if (iTent4 == iCaracter7) // if da 4° condição
                            {
                                system("cls");

                                cout << "\nA senha final é: ";

                                do
                                {
                                    cout << ">> ";
                                    cin >> iSenha;
                                    i++;
                                }
                                while(iSenha != iSenha2 && i < 2);

                                i = 0;

                                if (iSenha == iSenha2)
                                {
                                    system("cls");

                                    cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

                                    Sleep(1500);

                                    system("cls");

                                    cout << "\n\n\n\t\t\t\t\tPARABÉNS!!" << endl;

                                    Sleep(1500);

                                    system("cls");

                                    cout << "\n\t\t\t E Advinhe, 2014 foi o ano do último título mudial da Alemanha '0' " << endl;

                                    Sleep(6500);

                                    system("cls");
                                }
                                else
                                {
                                    system("cls");

                                    cout << "\n\n\n\t\t\t\t\tGame Over!! você falhou \n\n\n\n\n";

                                    Sleep(1500);

                                    system("cls");
                                }
                            }
                            else
                            {
                                system("cls");

                                cout << "\n\n\n\t\t\t\t\tVocê Chegou Perto!  \n\n\n\n\n";

                                Sleep(1500);

                                system("cls");
                            }

                        }
                        else // else da terceira condição
                        {
                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tGame Over!! você falhou \n\n\n\n\n";

                            Sleep(1500);

                            system("cls");
                        }
                    }
                    else // else da segunda condição
                    {
                        system("cls");

                        cout << "\n\n\n\t\t\t\t\tGame Over!! você falhou \n\n\n\n\n" << endl;

                        Sleep(1500);

                        system("cls");
                    }


                }
                else // else da primeira condição
                {
                    system("cls");

                    cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

                    Sleep(1500);

                    system("cls");

                    cout << "\n\n\n\t\t\t\t\tPARABÉNS!!" << endl;

                    Sleep(1500);

                    system("cls");

                    cout << "\n\t\t\t E Advinhe, 2014 foi o ano do último título mudial da Alemanha '0' " << endl;

                    Sleep(6500);

                    system("cls");
                }
                break;

            case 3:
                system("cls");

                cout << "\n Você escolheu o nível de dificuldade Avançado" << endl;
                cout << "------------------------------------------------" << endl;
                cout << "\nAdvinhe a senha (Contém 4 dígitos) >> ";
                cin >> iSenha;


                if (iSenha3 != iSenha)
                {
                    cout << "\n\t Senha Inválida! " << endl;
                    cout << "\t-----------------" << endl;

                    cout << "\n Dica 1 - o PRIMEIRO digito é o Resultado da Equação >> x² = 16" << endl;
                    cout << "----------------------------------------------------------------" << endl;

                    do
                    {
                        cout << "\nInsira a resposta aqui >> ";
                        cin >> iTent1;
                        i++;
                    }
                    while(iTent1 != iCaracter8 && i < 2);

                    i = 0;

                    if (iTent1 == iCaracter8) // if da 1° condição
                    {
                        system("cls");

                        cout << "\n\t Muito bem, você acertou o Primeiro dígito! " << endl;
                        cout << "\t--------------------------------------------" << endl;

                        cout << "\n\t Dica 2 - o SEGUNDO dígito é o valor de X >> | x² = 100 - 19 |" << endl;
                        cout << "\t---------------------------------------------------------------" << endl;

                        do
                        {
                            cout << "\nInsira a resposta aqui >> ";
                            cin >> iTent2;
                            i++;
                        }
                        while(iTent2 != iCaracter9 && i < 2);

                        i = 0;

                        if (iTent2 == iCaracter9) // if da 2° condição
                        {
                            system("cls");

                            cout << "\n Dica 3 - o TERCEIRO dígito da senha está entre >> | 1 e 4 | " << endl;
                            cout << "--------------------------------------------------------------" << endl;

                            cout << " Esta dica você tem 3 tentativas " << endl;
                            cout << "--------------------------------------------------------------" << endl;

                            do
                            {
                                cout << "\nInsira a resposta aqui >> ";
                                cin >> iTent3;
                                i++;
                            }
                            while(iTent3 != iCaracter10 && i < 3);

                            i = 0;

                            if (iTent3 == iCaracter10) // if da 3° condição
                            {
                                system("cls");

                                cout << "\n\t Dica 4 - sobre a Função >> | f(x)= 3.X² - 2.X + 4 | " << endl;
                                cout << "\t------------------------------------------------------" << endl;

                                cout << "\n é incorreto afirmar que >> |  1. Seu gráfico será representado por uma parábola.| " << endl;
                                cout << "\t\t\t    |  2. A função possui raízes reais.                  | " << endl;
                                cout << "\t\t\t    |  3. P(2 , 0) é um ponto desta função.              | " << endl;

                                do
                                {
                                    cout << "\nInsira a resposta aqui >> ";
                                    cin >> iTent4;
                                    i++;
                                }
                                while(iTent4 != iCaracter11 && i < 2);

                                i = 0;

                                if (iTent4 == iCaracter11) // if da 4° condição
                                {
                                    system("cls");

                                    cout << "\nA senha final é: ";
                                    cin >> iSenha;
                                }
                                else
                                {
                                    system("cls");

                                    cout << "\n\n\n\t\t\t\t\tGame Over!! você falhou \n\n\n\n\n";

                                    Sleep(1500);

                                    system("cls");
                                } //else da senha final

                                if (iSenha == iSenha3)
                                {
                                    system("cls");

                                    cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

                                    Sleep(1500);

                                    system("cls");

                                    cout << "\n\n\n\t\t\t\t\tPARABÉNS!!" << endl;

                                    Sleep(1500);

                                    system("cls");
                                }
                                else
                                {
                                    system("cls");

                                    cout << "\n\n\n\t\t\t\t\tGame Over!! você falhou \n\n\n\n\n";

                                    Sleep(1500);

                                    system("cls");
                                }
                            }
                            else
                            {
                                system("cls");

                                cout << "\n\n\n\t\t\t\t\tVocê Chegou Perto!  \n\n\n\n\n";

                                Sleep(1500);

                                system("cls");
                            }

                        }
                        else // else da terceira condição
                        {
                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tGame Over!! você falhou \n\n\n\n\n";

                            Sleep(1500);

                            system("cls");
                        }
                    }
                }
                else // else da primeira condição
                {
                    system("cls");

                    cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

                    Sleep(1500);

                    system("cls");

                    cout << "\n\n\n\t\t\t\t\tPARABÉNS!!" << endl;

                    Sleep(1500);

                    system("cls");
                }
                break;

            case 4:
                system("cls");

                cout << "\n\tEste é um jogo em que o usuário deve encontrar e memorizar os digitos de um código de senha.\n" "\tAo decorrer do jogo, o programa irá testar as habilidades matemáticas do Player. \n" "\to Player deverá indicar o nível de dificuldade desejada." << endl;

                Sleep(15000);

                system("cls");

                while(iDificul != 4);

                break;

            case 5:
                system("cls");

            default:
                cout << "\n\t\t\t\tUma pena que nao queira jogar comigo HAHAHA \n\n" << endl;

                Sleep(1500);

                system("cls");
            }


        }


    }
    while(iDificul != 5);

    return 0;
}
