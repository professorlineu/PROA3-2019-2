/**********************************************************
- Autor:     Adriel Silveira / Elbert Jean
- Descrição: Jogo da MEGA - v 1.0
**********************************************************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <time.h> // necessário para gerar número aleatório
#include <windows.h>
#include <fstream>
#include <string>
using namespace std;

void SetColor(int ForgC);

int main()
{
    int iAleatorio = 0; // número gerado pelo computador
    int iNumero = 0; // valor do usuário
    int iNivel = 0; // valor do usuário
    int i= 0;
    int icont = 0;
    int vet[6] ;
    int vet2[6] ;
    int vet3[6] ;
    int isoma = 0;
    int iescolha = 1;
    string sTexto ;
    string line;
    //ifstream myfile ("arquivo.txt");
    //ofstream myfile1 ("arquivo.txt");


    setlocale(LC_ALL,"");
    system("color F1");


// escrita

    // evita que o número sorteado seja sempre o mesmo a cada execução
    srand(time(NULL));

    while (iescolha == 1)
    {

        cout << " \n     JOGO DA MEGA ALEATÓRIO " << "\n";
        cout <<"\n       TABELA DE PONTUAÇÃO" << endl ;
        cout <<"\nTENTATIVAS \t\t PONTOS";
        cout <<"\n    1 \t\t\t   10";
        cout <<"\n  2 a 3 \t\t    7";
        cout <<"\n  4 a 5 \t\t    5";
        cout <<"\n  6 a 7 \t\t    3";
        cout <<"\n  8 a 9 \t\t    2";
        cout <<"\n   10\t\t\t    1";
        cout << endl ;




        while ( i<6 )

        {
            iAleatorio = rand() % 6+ 1;

            icont = 0;



            do

            {
                icont++ ;


                SetColor(4);
                cout << "\nDigite um número de 1 a 6: ";
                cin >> iNumero;

                if (iAleatorio > iNumero)
                {
                    SetColor(6);
                    cout << "\nPense em um número MAIOR!" << endl;
                    SetColor(5);
                }
                else if (iAleatorio < iNumero)
                {
                    SetColor(6);
                    cout << "\nPense em um número MENOR!" << endl;
                    SetColor(5);
                }

                // fim do else
                else
                {
                    cout << "\nParabéns, você acertou na " ;
                    system("cls");

                }

                cout << "Tentativa Número " <<icont << endl ;

            }


            while (iAleatorio != iNumero);

            SetColor(1);
            cout << "\nO número aleatório sorteado nessa rodada foi o " << iAleatorio <<endl << endl ;

            vet[i] = iAleatorio ;

            vet2[i] = icont ;



            i++;
        } // fim do while repetidor

        cout << "\nOs números sorteados neste jogo:" <<endl;
        for(i=0; i<6; i++)
        {
            cout << vet[i] << "\t " ;
        }

        cout << "\n" ;

        cout << "\nA quantidade de tentaivas para cada acerto:" <<endl;
        for(i=0; i<6; i++)
        {
            cout << vet2[i] << "\t " ;
        }
        cout << endl;

        for(i=0; i<6; i++)
        {

            if ( vet2[i] == 1)
            {
                isoma = isoma + 10;
            }

            else if ( vet2[i] >=2 && vet2[i] <=3)
            {
                isoma = isoma + 7;
            }

            else if ( vet2[i] >=4 && vet2[i] <=5)
            {
                isoma = isoma + 5;
            }

            else if ( vet2[i] >=6 && vet2[i] <=7)
            {
                isoma = isoma + 3;
            }

            else if ( vet2[i] >=8 && vet2[i] <=9)
            {
                isoma = isoma + 2;
            }

            else
            {
                isoma = isoma + 1;
            }
        } // while dos 6 numeros

        cout <<"\nA sua pontuação nesta rodada foi " << isoma << " pontos " << endl;
        cout << endl ;

 ofstream myfile ("arquivo.txt", ios_base::app);

    if (myfile.is_open())
    {
        cout << "Digite seu nome ";
       cin>> sTexto;

        myfile << sTexto << "\n";

        myfile.close();
    }
    else
        cout << "Arquivo com problema!";



        cout << "\n\t\t\t\t\t\t\tRANKING" <<endl;









        cout << "\n Deseja jogar mais uma rodada? :";
        cout << "\n 1= sim \t 2= não" << endl ;
        cin >> iescolha ;



    } // while jogar novamente



    cout << "\n Obrigado pela participação ";


} // fim do main






void SetColor(int ForgC)
{
    WORD wColor;
    //We will need this handle to get the current background attribute
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
