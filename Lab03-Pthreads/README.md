# Laboratório 3 - Pthreads

## Sobre o projeto

Esse projeto consiste em arrumar o código de multiplicação de matrizes utilizando Pthreads.
Este documento contém instruções detalhadas sobre como compilar, executar e verificar os resultados do programa entregue.

Testes foram realizados na plataforma AWS

## Integrantes

- André Akio Morita Osakawa - 32262787
- Rafael de Souza Oliveira Cerqueira Tinôco - 32224907
- Rodrigo Mileo Lourenço Gil - 32245920

## Instalação

Usando o `git`, clone o repositório usando o seguinte comando:

`git clone https://github.com/byakkotig/SO-Mack.git`, depois use o comando `cd SO-Mack` para entrar na pasta e o comando `cd Lab03-Pthreads` para entrar na pasta do lab

## Compilação e Execução

Para compilar o código, entre na pasta do projeto e no terminal, utilize o comando `gcc mult_matriz.c -o mult_matriz` e para executá-lo digite o comando `./mult_matriz`.

![alt](/Lab03-Pthreads/assets/compilacao.png)

### Prints da execução dos códigos estão tanto na pasta `assets` quanto nas instruções de cada exercicio abaixo

## Resolução do exercicio proposto

Como solicitado, segue abaixo o print da execução do programa de multiplicação de matrizes arrumado utilizando pthreads. O programa pede que o usuário digite o número de linhas e colunas da matriz A e quantas threads ele deseja, depois o usuário inseere os valores desejados na matriz e no vetor e a saída é sua matriz resultante.

### Teste 1: Matrix 3x3 e numero de threads = 3

![alt](/Lab03-Pthreads/assets/teste1.png)

### Teste 2: Matrix 10x10 e número de threads = 5

![alt](/Lab03-Pthreads/assets/teste2p1.png)
![alt](/Lab03-Pthreads/assets/teste2p2.png)