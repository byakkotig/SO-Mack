# Laboratório 3 - Pthreads - Parte 2

## Sobre o projeto

Esse projeto consiste em arrumar o código de cálculo de PI e depois fazer outro código para esse cálculo utilizando Mutex. Após isso, responder as questões feitas no moodle.
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

Para compilar os códigos, entre na pasta do projeto e no terminal, utilize o comando `gcc pi_sem_mutex.c -o pi_sem_mutex` e para executá-lo digite o comando `./pi_sem_mutex "numero de threads desejadas" "número de termos desejados"`, como no exemplo abaixo, para executar o programa sem mutex.

![alt](/Lab03-Pthreads_parte2/assets/compilacao1.png)

Utilize o comando `gcc pi_com_mutex.c -o pi_com_mutex` e para executá-lo digite o comando `./pi_com_mutex "numero de threads desejadas" "número de termos desejados`, como no exemplo abaixo, para executar o programa com mutex.

![alt](/)

### Prints da execução dos códigos estão tanto na pasta `assets` quanto nas instruções de cada exercicio abaixo

## Resultados Obtidos

### Print da saída do código sem mutex com valores de entrada (10 e 10) e (100 e 100)

Os resultados obtidos no código sem o uso de Mutex estão mostrados no print abaixo. O log de execução desse código está dentro da pasta do Lab

![alt](/Lab03-Pthreads_parte2/assets/saida1.png)

### Print da saída do código com mutex com valores de entrada 

Os resultados obtidos no código com o uso de Mutex estão mostrados no print abaixo. O log de execução desse código está dentro da pasta do Lab



## Respostas da perguntas

a) Implemente uma solução utilizando Mutex e compare com a anterior. O que mudou? Por quê?



b) No final, entregue no README do repositório uma explicação resumida sobre as diferenças entre os valores atingidos. Quais foram as causas das divergências? Por que elas aconteceram?