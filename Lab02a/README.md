# Laboratório 2a

## Sobre o projeto

Este documento contém instruções detalhadas sobre como compilar, executar e verificar os resultados do programa entregue. Além de responder as duas perguntas solicitadas pelo professor.

Testes foram realizados na plataforma AWS

## Integrantes

- André Akio Morita Osakawa - 32262787
- Rafael de Souza Oliveira Cerqueira Tinôco - 32224907
- Rodrigo Mileo Lourenço Gil - 32245920

## Instalação

Usando o `git`, clone o repositório usando o seguinte comando:

`git clone https://github.com/byakkotig/SO-Mack.git`, depois use o comando `cd SO-Mack` para entrar na pasta e o comando `cd Lab02a` para entrar na pasta do lab

### Prints da execução dos códigos estão tanto na pasta `assets` quanto nas instruções de cada exercicio abaixo

## Resoluções dos exercicios propostos

Como solicitado, a seguir seguem a execução de todos os códigos de exemplo que estavam presentes nos slides sobre processos, além das respostas das duas perguntas do último slide.

## Código do slide 2

![alt](/Lab02a/assets/Process_id.png)

Compile o arquivo no terminal usando o comando `gcc Process_id.c -o Process_id`

Após compilado, rode o código utilizando o comando `./Process_id`

## Código do slide 7

![alt](/Lab02a/assets/Criacao_processos.png)

Compile o arquivo no terminal usando o comando `gcc Criacao_processos.c -o Criacao_processos`

Após compilado, rode o código utilizando o comando `./Criacao_processos`

## Código do slide 8

![alt](/Lab02a/assets/Fork_Pai_Filho.png)

Compile o arquivo no terminal usando o comando `gcc Fork_Pai_Filho.c -o Fork_Pai_Filho`

Após compilado, rode o código utilizando o comando `./Fork_Pai_Filho`

## Código do slide 9

![alt](/Lab02a/assets/Pegando_proc_ID.png)

Compile o arquivo no terminal usando o comando `gcc Pegando_proc_ID.c -o Pegando_proc_ID`

Após compilado, rode o código utilizando o comando `./Pegando_proc_ID`

## Código do slide 10 com stderr(n = 1000)

![alt](/Lab02a/assets/Criando-cadeia-sterr.png)
![alt](/Lab02a/assets/criando_cadeia_sterr2.png)

Compile o arquivo no terminal usando o comando `gcc Criando_cadeia-proc.c -o Criando_cadeia-proc`

Após compilado, rode o código utilizando o comando `./Criando_cadeia-proc 1000`

## Código do slide 10 com stderr(n = 5000)

![alt](/Lab02a/assets/Criando-cadeia-sterr-5000.png)

Compile o arquivo no terminal usando o comando `gcc Criando_cadeia-proc.c -o Criando_cadeia-proc`

Após compilado, rode o código utilizando o comando `./Criando_cadeia-proc 5000`

## Código do slide 10 com stdout(n = 1000)

![alt](/Lab02a/assets/criando-cadeia-stdout.png)
![alt](/Lab02a/assets/criando-cadeia-stdout2.png)

Compile o arquivo no terminal usando o comando `gcc Criando_cadeia-proc_stdout.c -o Criando_cadeia-proc_stdout`

Após compilado, rode o código utilizando o comando `./Criando_cadeia-proc_stdout 1000`

# Respostas das perguntas do slide 11

1) Como observado nos prints dos códigos dos slides 10 acima, para valores testados de i, 1000 e 5000, os resultados foram printados ordenadamente.

2) Após realizar os testes vistos nos prints do slide 10 tanto com stderr quanto com stdout, se o programa anterior utilizasse sys.stdout para escrever as mensagens, não seriam notadas muitas mudanças. Visto que uma das diferenças entre stdout e stderr é que stderr separa as saídas de erro das saídas padrão. Por outro lado, stdout só tem a saída em sua forma padrão.