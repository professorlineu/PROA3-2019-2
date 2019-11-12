/**********************************************************
- Autor:     Clayton C Ribeiro e Robson Gomes Torres
- Descrição: Jogo da Velha
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

int main ()
{
    //Declaração de variáveis

    int i = 0, j=0;
    int iDificult = 0;
    char cUsuario = 0;
    char cComp = 0;
    int iUsuCol = 0, iUsuLin = 0;
    int iAleatColuna = 0, iAleatLinha = 0;
    char cJogoVelha[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

    //Código do Programa

    setlocale(LC_ALL,"");
    system("color F1");

    //Apresentação do Jogo
    cout << "\n\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t\tBem Vindo ao JOGO DA VELHA.\n\n";
    cout << "\t\t\t\tBy Clayton e Robson.\n";
    cout << "\t\t\t-------------------------------------------------\n\n";

    Sleep(2000);

    //Menu Principal
    cout << "\n\n\t\t\tSelecione o modo de jogo:";
    cout << "\n\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t\t1 -> Normal\n";
    cout << "\t\t\t\t2 -> Intermediário\n";
    cout << "\t\t\t\t3 -> Difícil\n";
    cout << "\t\t\t\t4 -> Informações sobre o Jogo\n";
    cout << "\t\t\t\t5 -> Sair\n";
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\tDigite a opção desejada:";
    cin >> iDificult;

    switch (iDificult) //Switch 1.1 de escolha da dificuldade
    {
    case 1:     //Dificuldade normal

        //Essa parte é para incluir o jogo da velha nível normal completo

        system ("cls");

        Sleep(1000);

        //Escolha do ícone para começar a jogar
        cout << "\n\n\tAntes de começar escolha X (Xis) ou O (Bola): ";
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

        default: //Nessa parte eu preciso criar um mecanismo para voltar ou encerrar o jogo
            cout << "Categoria digitada inválida." << endl;
        }

        Sleep(1500);


        //Jogada do usuário
        do
        {

            cout << "Digite o número da linha: ";
            cin >> iUsuLin;

            cout << "Digite o número da coluna: ";
            cin >> iUsuCol;
        }
        while ((cJogoVelha[iUsuLin][iUsuCol] == 'X') or (cJogoVelha[iUsuLin][iUsuCol] == 'O'));

        cJogoVelha [iUsuLin][iUsuCol] = cUsuario;

        Sleep(1000);
        system ("cls");

        for(i=0; i<3; i++) //Exibe a jogada do usuário
        {
            cout << endl;
            cout << i << " ";
            for (j=0;j<3;j++)
            {
                cout << cJogoVelha[i][j] << "\t";
            }

        } //Fim do 'for' de exibição da jogada do usuário


            //Horizontal completa
            if ((cJogoVelha [0][0] == cUsuario) and (cJogoVelha [0][1] == cUsuario) and (cJogoVelha [0][2] == cUsuario))
            {
                cout <<"Você ganhou! Parabéns!";
            }
            else

                if ((cJogoVelha [1][0] == cUsuario) and (cJogoVelha [1][1] == cUsuario) and (cJogoVelha [1][2] == cUsuario))
                {
                    cout <<"Você ganhou! Parabéns!";
                }
                else

                    if ((cJogoVelha [2][0] == cUsuario) and (cJogoVelha [2][1] == cUsuario) and (cJogoVelha [2][2] == cUsuario))
                    {
                        cout <<"Você ganhou! Parabéns!";
                    }
                    else

                        //Vertical completa
                        if ((cJogoVelha [0][0] == cUsuario) and (cJogoVelha [1][0] == cUsuario) and (cJogoVelha [2][0] == cUsuario))
                        {
                            cout <<"Você ganhou! Parabéns!";
                        }
                        else

                            if ((cJogoVelha [0][1] == cUsuario) and (cJogoVelha [1][1] == cUsuario) and (cJogoVelha [2][1] == cUsuario))
                            {
                                cout <<"Você ganhou! Parabéns!";
                            }
                            else

                                if ((cJogoVelha [0][2] == cUsuario) and (cJogoVelha [1][2] == cUsuario) and (cJogoVelha [0][2] == cUsuario))
                                {
                                    cout <<"Você ganhou! Parabéns!";
                                }
                                else


                                    //Diagonal completa
                                    if ((cJogoVelha [0][0] == cUsuario) and (cJogoVelha [1][1] == cUsuario) and (cJogoVelha [2][2] == cUsuario))
                                    {
                                        cout <<"Você ganhou! Parabéns!";
                                    }
                                    else

                                        if ((cJogoVelha [0][2] == cUsuario) and (cJogoVelha [1][2] == cUsuario) and (cJogoVelha [2][0] == cUsuario))
                                        {
                                            cout <<"Você ganhou! Parabéns!";
                                        }
                                        else


        //Jogada do computador
        do
        {

            //Variável aleatória para o Computador

            srand(time(NULL)); //Evita que o número sorteado seja sempre o mesmo a cada execução
            iAleatLinha = rand() % 3; //Gera um número aleatório

            srand(time(NULL)); //Evita que o número sorteado seja sempre o mesmo a cada execução
            iAleatColuna = rand() % 3; //Gera um número aleatório

        }
        while ((cJogoVelha[iAleatLinha][iAleatColuna] == 'X') or (cJogoVelha[iAleatLinha][iAleatColuna] == 'O'));


        Sleep(1000);
        system ("cls");

        for(i=0; i<3; i++) //Exibe a jogada do computador
        {
            cout << endl;
            cout << i << " ";
            for (j=0;j<3;j++)
            {
                cout << cJogoVelha [i][j] << "\t";
            }

        } //Fim do 'for' de exibição da jogada do computador

            //Horizontal completa
            if ((cJogoVelha [0][0] == cComp) and (cJogoVelha [0][1] == cComp) and (cJogoVelha [0][2] == cComp))
            {
                cout <<"Você perdeu para o computador!";
            }
            else

                if ((cJogoVelha [1][0] == cComp) and (cJogoVelha [1][1] == cComp) and (cJogoVelha [1][2] == cComp))
                {
                    cout <<"Você perdeu para o computador!";
                }
                else

                    if ((cJogoVelha [2][0] == cComp) and (cJogoVelha [2][1] == cComp) and (cJogoVelha [2][2] == cComp))
                    {
                        cout <<"Você perdeu para o computador!";
                    }
                    else

                        //Vertical completa
                        if ((cJogoVelha [0][0] == cComp) and (cJogoVelha [1][0] == cComp) and (cJogoVelha [2][0] == cComp))
                        {
                            cout <<"Você perdeu para o computador!";
                        }
                        else

                            if ((cJogoVelha [0][1] == cComp) and (cJogoVelha [1][1] == cComp) and (cJogoVelha [2][1] == cComp))
                            {
                                cout <<"Você perdeu para o computador!";
                            }
                            else

                                if ((cJogoVelha [0][2] == cComp) and (cJogoVelha [1][2] == cComp) and (cJogoVelha [0][2] == cComp))
                                {
                                    cout <<"Você perdeu para o computador!";
                                }
                                else


                                    //Diagonal completa
                                    if ((cJogoVelha [0][0] == cComp) and (cJogoVelha [1][1] == cComp) and (cJogoVelha [2][2] == cComp))
                                    {
                                        cout <<"Você perdeu para o computador!";
                                    }
                                    else

                                        if ((cJogoVelha [0][2] == cComp) and (cJogoVelha [1][2] == cComp) and (cJogoVelha [2][0] == cComp))
                                        {
                                            cout <<"Você perdeu para o computador!";
                                        }
                                        else




        break;  //Fim da dificuldade normal

    case 2: //Dificuldade intermediário
        break;  //Fim da ificuldade intermediário

    case 3: //Dificuldade difício
        break;  //Fim da ificuldade difício

    case 4: //Informações sobre o jogo

        system ("cls");

        cout << "\n\n\t Este jogo é um jogo da velha, onde o usuário joga contra o computador.\n";
        cout << "\t O jogo possui 3 dificuldades:\n";
        cout << "\t Normal é um jogo da velha simples.\n";
        cout << "\t No intermediário o usuário jogará um pequeno jogo para disputar a posição \n";
        cout << "\t central do tabuleiro, quem vencer começa o jogo principal com uma vantagem.\n";
        cout << "\t O difícil segue a mesma lógica do intermediário com a disputa de duas posições.\n";
        cout << "\n\n\t Este jogo foi desenvolvido pelos alunos: \n";
        cout << "\t\t Clayton Carneiro Ribeiro - clayton.ribeiro@live.com \n";
        cout << "\t\t Robson Gomes Torres - robson.gomes.torres@hotmail.com \n";
        cout << "\tIFSP - Campus São José dos Campos\n";
        cout << "\tCurso de Automação Industrial - Noturno\n";

        Sleep(30000);

        break;  //Fim do Informações sobre o jogo



    case 5: //Sair do jogo

        system ("cls");

    default:
        cout << "\n\n\t\t\t...Saindo do jogo...";

        Sleep(2000);

        system ("cls");

        cout << "\n\n\t\t\tAté a próxima!";

        Sleep(1500);

        system ("cls");

    } //Fim do switch 1.1 de escolha da dificuldade

    return 0;
} // Fim do programa principal
