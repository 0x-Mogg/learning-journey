<p align="center">
  <img src="https://img.shields.io/badge/Status-Concluído-brightgreen?style=for-the-badge" alt="Status Concluído">
  <img src="https://img.shields.io/badge/Linguagem-C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++">
  <img src="https://img.shields.io/badge/Plataforma-Linux%20%2F%2F%20Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white" alt="Linux">
  <img src="https://img.shields.io/badge/Autor-0x--Mogg-blueviolet?style=for-the-badge" alt="Autor 0x-Mogg">
</p>

---

## 🎯 Sobre o Projeto

Desenvolvido de forma autônoma como parte dos desafios práticos da faculdade de **Engenharia da Computação**, este projeto vai além da implementação tradicional de um Jokenpô. 

O foco foi estruturar um código limpo, modular e robusto, aplicando conceitos fundamentais de programação de sistemas, como controle de fluxo avançado, gerenciamento de escopo por variáveis globais, simulação de latência de processamento (*delay*) e tratamento rigoroso de entradas de usuário em ambiente Unix/Linux.

---

## 🛠️ Tecnologias e Conceitos Aplicados

* **Linguagem:** C++ (Padrão moderno compatível com compiladores GCC/G++).
* **Modularização:** Organização de interface e lógica desacoplada através de funções especializadas (`void menu()`).
* **Controle de Fluxo:** Utilização de estruturas condicionais aninhadas (`if`, `else if`, `else`) e mapeamento de opções via `switch-case`.
* **Biblioteca de Tempo (`<chrono>` e `<thread>`):** Implementação deliberada de atraso temporal (*sleep*) para simular o tempo de processamento e criar suspense no turno da inteligência artificial.
* **Geração Pseudoaleatória (`<cstdlib>`):** Sorteio dinâmico das jogadas da máquina baseado em operações modulares.

---

## ⚔️ Regras e Lore Temática

As regras clássicas ganharam uma identidade customizada diretamente no código-fonte para enriquecer a experiência interativa:

| Escolha | Item Temático | Vence de | Condição de Vitória |
| :---: | :--- | :--- | :--- |
| **`[1]`** | Pedra de fogo | Tesoura | Amassa / Quebra |
| **`[2]`** | Papel | Pedra | Embrulha |
| **`[3]`** | Tesoura | Papel | Corta |

---

## 📂 Arquitetura e Estrutura do Código

O código-fonte foi redigido com documentação interna detalhada para assegurar alta legibilidade:

1. **Includes e Configurações:** Importação otimizada de bibliotecas padrão de I/O, manipulação de tempo e aleatoriedade.
2. **Variáveis Globais:** Gerenciamento centralizado da escolha numérica do jogador (`opcoes`).
3. **Protótipos de Funções:** Declaração antecipada de assinaturas para garantir a organização do escopo de compilação.
4. **Função Principal (`main`):**
   * Captura personalizada do *nickname* do usuário via terminal.
   * Chamada do menu modularizado.
   * Execução assíncrona simulada com temporizador de 2 segundos para o turno da máquina.
   * Processamento lógico de verificação de resultados (Vitória, Derrota ou Empate) com mensagens dinâmicas personalizadas.
5. **Implementação de Funções:** Exibição da interface de escolha do usuário e validação de tratamento para entradas inválidas.

---

## 🚀 Como Compilar e Executar (Ambiente Linux / Debian/Ubuntu)

Siga os passos abaixo no terminal para compilar e executar o projeto:

### 1. Verifique a instalação do compilador G++
Certifique-se de que o G++ está instalado no seu sistema executando o comando:
```bash
g++ --version

Caso o terminal retorne que o comando não foi encontrado, instale as ferramentas de compilação essenciais executando:
Bash

    sudo apt update && sudo apt install build-essential

2. Navegue até a pasta do projeto

Utilize o comando cd para acessar o diretório onde estão localizados os seus arquivos de código-fonte:
Bash

cd caminho/para/a/pasta-do-projeto

3. Compile o código-fonte

Gere o arquivo executável a partir do seu código C++. Substitua main.cpp pelo nome do seu arquivo principal e programa pelo nome de preferência para o binário:
Bash

g++ main.cpp -o programa

4. Execute o programa

Inicie o arquivo binário gerado na etapa anterior diretamente pelo terminal:
Bash

./programa