# Laboratório 3 - Pthreads - Parte 2

## Sobre o projeto

Esse projeto consiste em arrumar o código de calculo de PI e fazer outro código para esse calculo utilizando Mutex. Após isso, responder as questões feitas no moodle.
Este documento contém instruções detalhadas sobre como compilar, executar e verificar os resultados do programa entregue.

Testes foram realizados na plataforma AWS

## Integrantes

- André Akio Morita Osakawa - 32262787
- Rafael de Souza Oliveira Cerqueira Tinôco - 32224907
- Rodrigo Mileo Lourenço Gil - 32245920

## Instalação

Usando o `git`, clone o repositório usando o seguinte comando:

`git clone https://github.com/byakkotig/SO-Mack.git`, depois use o comando `cd SO-Mack` para entrar na pasta e o comando `cd Lab03-Pthreads-parte2` para entrar na pasta do lab

## Compilação e Execução

Para compilar os códigos, entre na pasta do projeto e no terminal, utilize o comando `gcc pi_sem_mutex.c -o pi_sem_mutex` e para executá-lo digite o comando `./pi_sem_mutex`, para executar o programa sem mutex.

![alt](/Lab03-Pthreads/assets/compilacao.png)

Utilize o comando `gcc pi_com_mutex.c -o pi_com_mutex` e para executá-lo digite o comando `./pi_com_mutex`, para executar o programa com mutex.

![alt](/Lab03-Pthreads/assets/compilacao.png)

### Prints da execução dos códigos estão tanto na pasta `assets` quanto nas instruções de cada exercicio abaixo

