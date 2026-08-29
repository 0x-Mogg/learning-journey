/*
 * =====================================================================
 * Projeto:     Jogo Pedra, Papel e Tesoura (Jokenpô)
 * Autor:       0x-Mogg
 * Versão:      1.0.0
 * Data:        2026-08-23
 * ---------------------------------------------------------------------
 * Descrição:
 *   Implementação de um jogo clássico de Pedra, Papel e Tesoura em C++
 *   utilizando modularização de código com funções, manipulação de 
 *   variável global para o fluxo de escolhas, atraso simulado (delay) 
 *   para o turno da máquina e estruturas condicionais completas para 
 *   determinar o resultado da partida.
 * =====================================================================
 */

// =====================================================================
// 1. BIBLIOTECAS (INCLUDES) E CONFIGURAÇÕES
// =====================================================================
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;

// =====================================================================
//  VARIÁVEIS GLOBAIS
// =====================================================================
// Armazena a escolha numérica do jogador (1-Pedra, 2-Papel, 3-Tesoura)
int opcoes;

// =====================================================================
//  PROTÓTIPOS DE FUNÇÕES (Assinaturas)
// =====================================================================
// Informa ao compilador que a função existe antes da chamada no main
void menu();
    
// =====================================================================
//  FUNÇÃO PRINCIPAL (MAIN) - Onde o programa começa
// =====================================================================
int main()
{
    //  Declaração de variáveis locais da partida
    int maquina;
    string nome;
    int vitoria = 0;
    int empate = 0;
    int derrota = 0;

    //  Apresentação inicial e captura do nickname do usuário
    cout << "Antes do jogo comecar, nos diga seu nick name? " << endl;
    cin >> nome;
    cout << "Seja bem-vindo, " << nome << "!" << endl;


    // Loop principal do jogo: repete a partida por 3 rodadas consecutivas.
    for (int i = 0; i < 3; i++)
    {
        // Chamada da função modularizada do menu e captura da jogada
        menu();

        //  Processamento do turno da máquina com atraso simulado (delay)
        cout << "\nAgora e a vez da maquina...... " << endl;
        this_thread::sleep_for(seconds(2));

        // Sorteio randômico da jogada da máquina (valores de 1 a 3)
        maquina = ((rand() % 3) + 1);
        cout << "A maquina escolheu: " << maquina << endl;

        switch (maquina)
        {
        case 1:
            cout << "Maquina escolheu Pedra \n";
            break;
        case 2:
            cout << "Maquina escolheu Papel  \n";
            break;
        case 3:
            cout << "Maquina escolheu Tesoura \n";
            break;
        default:
            cout << "opçao invalida \n";
            break;
        }

        //  Estrutura condicional para validação e determinação do vencedor

        // CASO 1: EMPATES
        if (opcoes == 1 && maquina == 1)
        {
            cout << "Deu Empate! Os dois escolheram Pedra." << endl;
             empate++;
            cout <<"voces Empataram " << empate << endl;
        }
        else if (opcoes == 2 && maquina == 2)
        {
            cout << "Deu Empate! Os dois escolheram Papel." << endl;
            empate++;
            cout << "voces Empataram " <<  empate << endl;
        }
        else if (opcoes == 3 && maquina == 3)
        {
            cout << "Deu Empate! Os dois escolheram Tesoura." << endl;
            empate++;
            cout << "voces Empataram " << empate << endl;
        }

        // CASO 2: VITÓRIAS DA MÁQUINA
        else if (maquina == 2 && opcoes == 1) // Papel ganha de Pedra
        {
            cout << "A maquina ganhou e " << nome << " voce foi embrulhado!" << endl;
            derrota++;
            cout <<"voce Perdeu "  <<  derrota << endl;
        }
        else if (maquina == 1 && opcoes == 3) // Pedra ganha de Tesoura
        {
            cout << "A maquina ganhou e " << nome << " voce foi quebrado!" << endl;
            derrota++;
            cout << "voce Perdeu " << derrota << endl;
        }
        else if (maquina == 3 && opcoes == 2) // Tesoura ganha de Papel
        {
            cout << "A maquina ganhou e " << nome << " voce foi cortado!" << endl;
            derrota++;
            cout <<"voce Perdeu " <<  derrota << endl;
           
        }

        // CASO 3: VITÓRIAS DO JOGADOR
        else if (maquina == 3 && opcoes == 1) // Pedra ganha de Tesoura
        {
            cout << nome << " ganhou! Parabens! A maquina foi quebrada ." << endl;
            vitoria++;
            cout << " voce ganhou " << vitoria << endl;
        }
        else if (maquina == 1 && opcoes == 2) // Papel ganha de Pedra
        {
            cout << nome << " ganhou! Parabens! A maquina foi embrulhada." << endl;
            vitoria++;
            cout <<"voce ganhou " <<  vitoria  << endl; 

        }
        else if (maquina == 2 && opcoes == 3) // Tesoura ganha de Papel
        {
            cout << nome << " ganhou! Parabens! A maquina foi cortada." << endl;
            vitoria++;
            cout << "voce ganhou " << vitoria << endl; 
        }
       
    }
    cout << "------------------------------------------------------------------------------------------"<< endl;
     return 0;
}

// =====================================================================
// IMPLEMENTAÇÃO DAS FUNÇÕES PERSONALIZADAS
// =====================================================================

// Função responsável por exibir a interface do menu e capturar a escolha
void menu() {
    do
    {

        cout << "\n=========================================\n";
        cout << "       JOGO: PEDRA, PAPEL E TESOURA      \n";
        cout << "=========================================\n";
        cout << " As regras do jogo sao:\n";
        cout << "  * Pedra ganha de Tesoura (amassa/quebra)\n";
        cout << "  * Tesoura ganha de Papel (corta)\n";
        cout << "  * Papel ganha de Pedra (embrulha)\n";
        cout << "-----------------------------------------\n";
        cout << " Escolha sua opcao:\n";
        cout << "  [1] Pedra\n";
        cout << "  [2] Papel\n";
        cout << "  [3] Tesoura\n";
        cout << "-----------------------------------------\n";
        cout << " Qual vai ser sua escolha? ";
        cin >> opcoes;

        switch (opcoes)
        {
        case 1:
            cout << "Voce escolheu Pedra \n";
            break;
        case 2:
            cout << "voce escolheu Papel\n";
            break;
        case 3:
            cout << "voce Escolheu Tesoura\n";
            break;
        default:
            cout << " opçao inavalida \n";
            break;
        }
    }while (opcoes != 0 && opcoes != 1 && opcoes != 2 && opcoes != 3);
    
}