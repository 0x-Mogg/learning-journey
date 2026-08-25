# Jogo Jokenpô (Pedra, Papel e Tesoura) em C++

<p align="center">
  <b>Autor:</b> 0x-Mogg | <b>Versão:</b> 1.0.0 | <b>Data:</b> 2026-08-23
</p>

---

## 🎯 Sobre o Projeto

Este projeto consiste na implementação clássica do jogo **Pedra, Papel e Tesoura (Jokenpô)** desenvolvida em **C++**, criada como parte dos desafios práticos da faculdade de Engenharia da Computação. 

O foco principal desta implementação foi ir além do básico, aplicando conceitos importantes de modularização de código, controle de fluxo por variáveis globais, manipulação de tempo de execução (*delay*) e tratamento de entradas do usuário com validações condicionais completas.

---

## 🛠️ Tecnologias e Conceitos Aplicados

* **Linguagem:** C++
* **Modularização:** Organização da lógica de interface através de funções personalizadas (`void menu()`).
* **Controle de Fluxo:** Uso de estruturas condicionais aninhadas (`if`, `else if`, `else`) e mapeamento de escolhas via `switch-case`.
* **Biblioteca de Tempo (`<chrono>` e `<thread>`):** Implementação de um atraso simulado (*delay*) para criar suspense durante o turno de processamento da máquina.
* **Geração Pseudoaleatória (`<cstdlib>`):** Sorteio dinâmico das jogadas da inteligência artificial.

---

## 🕹️ Regras do Jogo

As regras seguem o formato tradicional com uma temática personalizada implementada no código:

* **Pedra** (`[1]` - *Pedra de fogo*): Ganha de Tesoura (amassa/quebra).
* **Papel** (`[2]` - *Folhas de cerejeira*): Ganha de Pedra (embrulha).
* **Tesoura** (`[3]` - *Mão de Tesoura*): Ganha de Papel (corta).

---

## 📂 Estrutura do Código

O código-fonte foi estruturado de forma limpa e comentada para facilitar a legibilidade e a manutenção:

1. **Includes e Configurações:** Importação de bibliotecas padrão de entrada/saída, manipulação de tempo e números randômicos.
2. **Variáveis Globais:** Gerenciamento centralizado da escolha numérica do jogador (`opcoes`).
3. **Protótipos de Funções:** Declaração antecipada da função de menu.
4. **Função Principal (`main`):**
   * Captura do *nickname* personalizado do usuário.
   * Chamada do menu modularizado.
   * Execução do turno da máquina com temporizador de 2 segundos.
   * Processamento e exibição do resultado da partida (Vitória, Derrota ou Empate com mensagens dinâmicas).
5. **Implementação de Funções:** Lógica de exibição da interface de escolha e tratamento de opções inválidas.

---

## 🚀 Como Compilar e Executar

Se você estiver em um ambiente Linux (como o Ubuntu), siga os passos abaixo para compilar e rodar o jogo via terminal:

1. Certifique-se de ter um compilador C++ instalado (como o `g++`).
2. Abra o terminal na pasta onde o arquivo `.cpp` está salvo.
3. Compile o código executando o comando:
   ```bash
   g++ jokenpo.cpp -o jokenpo