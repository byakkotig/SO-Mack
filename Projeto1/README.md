# Projeto 1 - SO

## Sobre o projeto

O projeto consiste em encontrar o problema do código apresentado, que no caso é a condição de corrida no código, em que vários subprocessos tentam executar a função transferencia ao mesmo tempo, por conta dos saldos serem compartilhados entre os subprocessos.

Alteramos o código inicial para que o problema seja corrigido utilizando a biblioteca `pthread`, para manipular threads e usar mutexes, utilizados para garantir que somente uma thread por vez possa acessar e modificar as contas, evitando conflitos e inconsistências nos saldos, além disso no código modificado a direção de cada transação é feita de forma aleatória, podendo ser tanto de from para to como o contrário.

Este documento contém instruções detalhadas sobre como compilar, executar e verificar os resultados do programa entregue. 

Testes foram realizados na plataforma AWS

## Integrantes

- André Akio Morita Osakawa - 32262787
- Rafael de Souza Oliveira Cerqueira Tinôco - 32224907
- Rodrigo Mileo Lourenço Gil - 32245920

## Instalação

Usando o `git`, clone o repositório usando o seguinte comando:

`git clone https://github.com/byakkotig/SO-Mack.git`, depois use o comando `cd SO-Mack` para entrar na pasta e o comando `cd Projeto1` para entrar na pasta do projeto

## Compilação e Execução

Para compilar o código, entre na pasta do projeto e no terminal, utilize o comando `gcc projeto.c -o projeto -lpthread` e para executá-lo digite o comando `./projeto`.

![alt](/Projeto1/assets/compilacao.png)

O programa pergunta ao usuário quantas transferências ele deseja, além dos valores das duas contas(From e To), além do valor das transferências.

## Resultados

Os resultados obtidos estão mostrados nos prints abaixo.

Print com 100 transações e valor de transferência 10(saldo from = 100, saldo to = 100)

![alt](/Projeto1/assets/teste1.png)

Print com 20 transações e valor de transferência 10(saldo from = 100, saldo to = 100)

![alt](/Projeto1/assets/teste2.png)
![alt](/Projeto1/assets/teste2.1.png)