/**********************************************************
- Grupo:    Alysson F�lix, Cau� Gabriel e Fabr�cio Nunes
- Descri��o: Adivinhe a Senha - v 1.0
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
    //Declara��o de vari�veis

    int i = 0;
    int i2 = 0;
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

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color 0");

    //C�digo do programa

    cout << "\n\n\n\t\t\t\t\tBem vindo ao Meu Jogo!\n\n\n ";

    Sleep(2000);

    system("cls");

    cout << "\n\n\n\t\t\t\t\tSeleciono o modo de jogo :\n\n\n ";

    cout << "\t\t\t\t-------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t1 -> Normal" << endl;
    cout << "\t\t\t\t\t\t2 -> Intermedi�rio" << endl;
    cout << "\t\t\t\t\t\t3 -> Avan�ado" << endl;
    cout << "\t\t\t\t\t\t4 -> Informa��es sobre o jogo" << endl;
    cout << "\t\t\t\t\t\t5 - Sair" << endl;
    cout << "\t\t\t\t-------------------------------------------";

    cout << "\n\n\t\t\t\tEscolha o n�vel de dificuldade: ";
    cin >> iDificul;

    system("cls");

    switch (iDificul)
    {
    case 1:

        cout << "\nVoc� escolheu o n�vel de dificuldade Normal ";
        cout << "\nAdvinhe a senha (Cont�m apenas 3 d�gitos) >> ";
        cin >> iSenha;

        if (iSenha1 != iSenha) // if da tentativa 1
        {
            cout << "\n\tSenha Inv�lida! | 1� Tentativa " << endl;
            cout << "\t--------------------------------" << endl;
            cout << "\nDica 1 - o PRIMEIRO d�gito da senha � a Raiz Quadrada de '4'! " << endl;
            cout << "\ntente novamente >> ";
            cin >> iTent1;

            if (iTent1 != iCaracter1) // if da tentativa 2
            {
                system("cls");

                cout << "\n\tSenha Inv�lida! | 2� Tentativa " << endl;
                cout << "\t--------------------------------" << endl;
                cout << "\nDica 1 - o PRIMEIRO d�gito da senha � a Raiz Quadrada de '4'! " << endl;
                cout << "\nInsira aqui sua conclus�o >> ";
                cin >> iTent1;

                if (iTent1 != iCaracter1) // if da tentativa 3
                {
                    system("cls");

                    cout << "\n\tSenha Inv�lida! | 3� Tentativa " << endl;
                    cout << "\t--------------------------------" << endl;
                    cout << "\nDica 1 - o PRIMEIRO d�gito da senha � a Raiz Quadrada de '4'! " << endl;
                    cout << "\nInsira aqui sua conclus�o >> ";
                    cin >> iTent1;

                    if (iTent1 == iCaracter1)
                    {
                        system("cls");

                        cout << "\nMuito bem, voc� acertou o Primeiro d�gito! " << endl;
                        cout << "---------------------------------------------" << endl;
                        cout << "\nDica 2 - o SEGUNDO d�gito equivalente � (3�)-4 " << endl;
                        cout << "\nVamos ver se voc� consegue!! " << endl;
                        cout << "\nInsira aqui sua conclus�o >> ";
                        cin >> iTent2;

                        if (iTent2 != iCaracter2)
                        {
                            cout << "\n\tSenha Inv�lida! | 2� Tentativa " << endl;
                            cout << "\t--------------------------------" << endl;
                            cout << "\nDica 2 - o SEGUNDO d�gito equivalente � (3�)-4 " << endl;
                            cout << "\nVamos ver se voc� consegue!! " << endl;
                            cout << "\nInsira aqui sua conclus�o >> ";
                            cin >> iTent2;

                            if (iTent2 != iCaracter2)
                            {
                                cout << "\n\tSenha Inv�lida! | 3� Tentativa " << endl;
                                cout << "\t--------------------------------" << endl;
                                cout << "\nDica 2 - o SEGUNDO d�gito equivalente � (3�)-4 " << endl;
                                cout << "\nVamos ver se voc� consegue!! " << endl;
                                cout << "\nInsira aqui sua conclus�o >> ";
                                cin >> iTent2;

                                if (iTent2 == iCaracter2)
                                {
                                    system("cls");

                                    cout << "\n\t\tParab�ns, voc� est� quase la! " << endl;
                                    cout << "\nDica 3 - o TERCEIRO digito da senha �: " << " | 1� d�gito + 2� |" << "\n\t\t\t\t\t | Multiplicado por 2 |" << "\n\t\t\t\t\t| MAIS 2 , Dividido por 2 |" << endl;
                                    cout << "\nInsira aqui sua conclus�o >> ";
                                    cin >> iTent3;

                                    if (iTent3 != iCaracter3)
                                    {
                                        system("cls");

                                        cout << "\nEnt�o a Senha � >> ";
                                        cin >> iSenha;

                                        if (iSenha == iSenha1)
                                        {
                                            system("cls");

                                            cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

                                            Sleep(1500);

                                            system("cls");

                                            cout << "\n\n\n\t\t\t\t\tPARAB�NS!!" << endl;

                                            Sleep(1500);

                                            system("cls");
                                        }
                                        else
                                        {
                                            system("cls");

                                            cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n" << endl;

                                            Sleep(1500);

                                            system("cls");
                                        }
                                    }
                                    else
                                    {
                                        system("cls");

                                        cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n" << endl;

                                        Sleep(1500);

                                        system("cls");
                                    }
                                }
                                else
                                {
                                    system("cls");

                                    cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n" << endl;

                                    Sleep(1500);

                                    system("cls");
                                }
                            }
                            else
                            {
                                system("cls");

                                cout << "\n\t\tParab�ns, voc� est� quase la! " << endl;
                                cout << "\nDica 3 - o TERCEIRO digito da senha �: " << " | 1� d�gito + 2� |" << "\n\t\t\t\t\t | Multiplicado por 2 |" << "\n\t\t\t\t\t| MAIS 2 , Dividido por 2 |" << endl;
                                cout << "\nInsira aqui sua conclus�o >> ";
                                cin >> iTent3;
                            }
                        }
                        else
                        {
                            system("cls");

                            cout << "\n\t\tParab�ns, voc� est� quase la! " << endl;
                            cout << "\nDica 3 - o TERCEIRO digito da senha �: " << " | 1� d�gito + 2� |" << "\n\t\t\t\t\t | Multiplicado por 2 |" << "\n\t\t\t\t\t| MAIS 2 , Dividido por 2 |" << endl;
                            cout << "\nInsira aqui sua conclus�o >> ";
                            cin >> iTent3;
                        }
                    }
                    else //else do erro da tentativa 3 do d�gito 1
                    {
                        system("cls");

                        cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n" << endl;

                        Sleep(1500);

                        system("cls");
                    }

                    if (iTent3 == iCaracter3 || iTent3 >= 0) // if da tentativa 4
                    {
                        system("cls");

                        cout << "\nEnt�o a Senha �: ";
                        cin >> iSenha;

                        if (iSenha == iSenha1)
                        {
                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

                            Sleep(1500);

                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tPARAB�NS!!" << endl;

                            Sleep(1500);

                            system("cls");
                        }
                        else
                        {
                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n";

                            Sleep(1500);

                            system("cls");
                        }
                    }
                    else
                    {
                        system("cls");

                        cout << "\n\n\n\t\t\t\t\tVoc� Chegou Perto!  \n\n\n\n\n";

                        Sleep(1500);

                        system("cls");
                    }

                }
                else // else da terceira condi��o
                {
                    system("cls");

                    cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n";

                    Sleep(1500);

                    system("cls");
                }
            }
            else // else da segunda condi��o
            {
                system("cls");

                cout << "\nMuito bem, voc� acertou o Primeiro d�gito! " << endl;
                cout << "---------------------------------------------" << endl;
                cout << "\nDica 2 - o SEGUNDO d�gito equivalente � (3�)-4 " << endl;
                cout << "\nVamos ver se voc� consegue!! " << endl;
                cout << "\nInsira aqui sua conclus�o >> ";
                cin >> iTent2;

            } // else do if da tentativa 1


        }
        else // else da primeira condi��o
        {
            system("cls");

            cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

            Sleep(1500);

            system("cls");

            cout << "\n\n\n\t\t\t\t\tPARAB�NS!!" << endl;

            Sleep(1500);

            system("cls");
        }
        break;

    case 2:

        cout << "\nVoc� escolheu o n�vel de dificuldade Intermedi�rio \n" << endl;
        cout << "\nAdvinhe a senha (Cont�m 4 d�gitos) >> ";
        cin >> iSenha;

        if (iSenha != iSenha2 )
        {
            cout << "\n\tSenha Inv�lida! " << endl;

            cout << "\nDica 1 - o PRIMEIRO digito � a convers�o deste n�mero '10' (bin�rio) para decimal" << endl;
            cout << "\ntente novamente >> ";
            cin >> iTent1;

            if (iTent1 == iCaracter4) // if da 1� condi��o
            {
                system("cls");

                cout << "\nMuito bem, voc� acertou o Primeiro d�gito! " << endl;

                cout << "\nDica 2 - o SEGUNDO d�gito � a Quantidade de mundiais que o Palmeiras tem " << endl;
                cout << "\nInsira aqui >> ";
                cin >> iTent2;

                if (iTent2 == iCaracter5) // if da 2� condi��o
                {
                    system("cls");

                    cout << "\nDica 3 - o TERCEIRO digito da senha est� no meio desta frase 'It was one good game'" << endl;
                    cout << "\nInsira aqui >> ";
                    cin >> iTent3;

                    if (iTent3 == iCaracter6) // if da 3� condi��o
                    {
                        system("cls");

                        cout << "\nDica 4 - o QUARTO digito � a quantidade de copas do mundo da sele��o da Alemanha " << endl;
                        cout << "\nInsira aqui >> ";
                        cin >> iTent4;

                        if (iTent4 == iCaracter7) // if da 4� condi��o
                        {
                            system("cls");

                            cout << "\nA senha final �: ";
                            cin >> iSenha;
                        }
                        else
                        {
                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n";

                            Sleep(1500);

                            system("cls");
                        } //else da senha final

                        if (iSenha == iSenha2)
                        {
                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

                            Sleep(1500);

                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tPARAB�NS!!" << endl;

                            Sleep(1500);

                            system("cls");

                            cout << "\n\t\t\t E Advinhe, 2014 foi o ano do �ltimo t�tulo mudial da Alemanha '0' " << endl;

                            Sleep(6500);

                            system("cls");
                        }
                        else
                        {
                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n";

                            Sleep(1500);

                            system("cls");
                        }
                    }
                    else
                    {
                        system("cls");

                        cout << "\n\n\n\t\t\t\t\tVoc� Chegou Perto!  \n\n\n\n\n";

                        Sleep(1500);

                        system("cls");
                    }

                }
                else // else da terceira condi��o
                {
                    system("cls");

                    cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n";

                    Sleep(1500);

                    system("cls");
                }
            }
            else // else da segunda condi��o
            {
                system("cls");

                cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n" << endl;

                Sleep(1500);

                system("cls");
            }


        }
        else // else da primeira condi��o
        {
            system("cls");

            cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

            Sleep(1500);

            system("cls");

            cout << "\n\n\n\t\t\t\t\tPARAB�NS!!" << endl;

            Sleep(1500);

            system("cls");

            cout << "\n\t\t\t E Advinhe, 2014 foi o ano do �ltimo t�tulo mudial da Alemanha '0' " << endl;

            Sleep(6500);

            system("cls");
        }
        break;

    case 3:
        system("cls");

        cout << "\nVoc� escolheu o n�vel de dificuldade Avan�ado \n" << endl;
        cout << "\nAdvinhe a senha (Cont�m 4 d�gitos) >> ";
        cin >> iSenha;


        if (iSenha3 != iSenha)
        {
            cout << "\n\tSenha Inv�lida! " << endl;

            cout << "\nDica 1 - o PRIMEIRO digito � o Resultado da Equa��o >> x� = 16" << endl;
            cout << "\ntente novamente >> ";
            cin >> iTent1;

            if (iTent1 == iCaracter8) // if da 1� condi��o
            {
                system("cls");

                cout << "\nMuito bem, voc� acertou o Primeiro d�gito! " << endl;

                cout << "\nDica 2 - o SEGUNDO d�gito � o valor de X >> | x� = 100 - 19 |" << endl;
                cout << "\nInsira aqui >> ";
                cin >> iTent2;

                if (iTent2 == iCaracter9) // if da 2� condi��o
                {
                    system("cls");

                    cout << "\nDica 3 - o TERCEIRO d�gito da senha est� entre >> | 1 e 4 | " << endl;
                    cout << "\nInsira aqui sua conclus�o >> ";
                    cin >> iTent3;

                    if (iTent3 == iCaracter10) // if da 3� condi��o
                    {
                        system("cls");

                        cout << "\nDica 4 - sobre a Fun��o >> | f(x)= 3.X� - 2.X + 4 | " << endl;
                        cout << "\n � incorreto afirmar que >> 1. Seu gr�fico ser� representado por uma par�bola. " << endl;
                        cout << "\t\t\t    2. A fun��o possui ra�zes reais. " << endl;
                        cout << "\t\t\t    3. P(2 , 0) � um ponto desta fun��o. " << endl;
                        cout << "\nInsira aqui sua conclus�o >> ";
                        cin >> iTent4;

                        if (iTent4 == iCaracter11) // if da 4� condi��o
                        {
                            system("cls");

                            cout << "\nA senha final � >> ";
                            cin >> iSenha;
                        }
                        else
                        {
                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n";

                            Sleep(1500);

                            system("cls");
                        } //else da senha final

                        if (iSenha == iSenha3)
                        {
                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

                            Sleep(1500);

                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tPARAB�NS!!" << endl;

                            Sleep(1500);

                            system("cls");
                        }
                        else
                        {
                            system("cls");

                            cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n";

                            Sleep(1500);

                            system("cls");
                        }
                    }
                    else
                    {
                        system("cls");

                        cout << "\n\n\n\t\t\t\t\tVoc� Chegou Perto!  \n\n\n\n\n";

                        Sleep(1500);

                        system("cls");
                    }

                }
                else // else da terceira condi��o
                {
                    system("cls");

                    cout << "\n\n\n\t\t\t\t\tGame Over!! voc� falhou \n\n\n\n\n";

                    Sleep(1500);

                    system("cls");
                }
            }
        }
        else // else da primeira condi��o
        {
            system("cls");

            cout << "\n\n\n\t\t\t\t\tAcesso liberado" << endl;

            Sleep(1500);

            system("cls");

            cout << "\n\n\n\t\t\t\t\tPARAB�NS!!" << endl;

            Sleep(1500);

            system("cls");
        }
        break;

        case 4:
            system("cls");

            cout << "\n\tEste � um jogo em que o usu�rio deve encontrar e memorizar os digitos de um c�digo de senha.\n" "\tAo decorrer do jogo, o programa ir� testar as habilidades matem�ticas do Player. \n" "\to Player dever� indicar o n�vel de dificuldade desejada." << endl;

            Sleep(15000);

            system("cls");

            break;

        case 5:
            system("cls");

        default:
            cout << "\n\t\t\t\tUma pena que nao queira jogar comigo HAHAHA \n\n" << endl;

            Sleep(1500);

            system("cls");
        }


        return 0;
    }
