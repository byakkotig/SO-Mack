# Projeto 2 - SO

## Sobre o projeto

O projeto consiste em criar um código para uma escada rolante dupla, que sobe e desce, e sendo necessário seguir algumas condições impostas no enunciado do problema, o que foi feito no código e descrito e mostrado através de imagens nos próximos itens. 

## Integrantes

- André Akio Morita Osakawa - 32262787
- Rafael de Souza Oliveira Cerqueira Tinôco - 32224907

## Instalação

Usando o `git`, clone o repositório usando o seguinte comando:

`git clone https://github.com/byakkotig/SO-Mack.git`, depois use o comando `cd SO-Mack` para entrar na pasta e o comando `cd Projeto2` para entrar na pasta do lab

## Compilação e Execução

Para compilar os códigos, entre na pasta do projeto e no terminal, utilize o comando `gcc escada.c -o escada` e para executá-lo digite o comando `./escada`, como no exemplo abaixo, para executar o programa da escada rolante. O programa irá pedir para o usuario digitar o diretorio e nome do arquivo, então é necessário digita-lo assim: `./input/E_**` em que ** é o numero do arquivo desejado da pasta input.

![alt](/Projeto2/assets/compilacao.png)


### Prints da execução dos códigos estão tanto na pasta `assets` quanto nas instruções de cada exercicio abaixo

## Solução e lógica do código

### Solução: 
O programa utiliza tempo para representar os momentos em que os passageiros chegam à escada. E as direções para classificar se a escada rolante irá para cima ou para baixo. E uma variável para representar o número de passageiros na escada rolante.

Os dados de entrada são separados nos vetores: tempoAtual e distanciaAtual. Assim sendo armazenados os valores de chegada e a distância de cada pessoa.


#### Variáveis de controle:

- mainIndice: Esta variável é usada como um índice para iterar pelos passageiros nos dados de entrada.

- auxIndice: Esta variável parece ser declarada, mas não é usada no código fornecido.

- chegadaEsperada: Esta variável armazena o tempo de chegada esperado no próximo andar.

- tempoPendente: Este é um array que armazena os tempos de chegada dos passageiros que estão esperando para usar a escada rolante.

- direcPendente: Este é um array que armazena as direções dos passageiros que estão esperando para usar a escada rolante.

- passageirosRestantes: Esta variável armazena o número de passageiros que ainda estão esperando para usar a escada rolante.

- ultimoInstante: Esta variável armazena o tempo final em que a escada rolante para.

- direcao: Esta variável armazena a direção que a escada rolante está se movendo atualmente (para cima ou para baixo).

- instante: Esta variável armazena o tempo atual.

- pending: Esta é uma variável booleana que indica se há passageiros esperando para usar a escada rolante.

### Lógica: 

- Função escadaRolante(int* t, int* d, int n): Esta função simula a operação da escada rolante. Ela recebe três parâmetros: um array t representando os tempos de chegada dos passageiros, um array d representando a direção que cada passageiro deseja ir (para cima ou para baixo), e um inteiro n representando o número de passageiros. A função calcula o tempo final em que a escada rolante para e retorna esse tempo.

- Função lerData(char* caminhoArquivo, int* t, int* d, int* n): Esta função lê dados de um arquivo. Ela recebe quatro parâmetros: uma string caminhoArquivo representando o caminho para o arquivo, dois arrays de inteiros t e d para armazenar os tempos de chegada e as direções dos passageiros, e um ponteiro de inteiro n para armazenar o número de passageiros. A função abre o arquivo, lê os dados e armazena-os nos arrays e no inteiro fornecidos.

- Função main(): Esta é a função principal do programa. Ela primeiro pede ao usuário para inserir o caminho para o arquivo contendo os dados. Em seguida, ela chama a função lerData para ler os dados do arquivo. Depois disso, ela chama a função escadaRolante para simular a operação da escada rolante e obter o tempo final em que a escada rolante para. A função então imprime esse tempo. Finalmente, ela abre outro arquivo para ler algum resultado e imprime esse resultado.





## Resultados (E_1, E_2, E_4, E_36 e E_50)

### Print com teste de input E_1 (Ele retorna o resultado e abaixo o resultado esperado, presente na pasta output).

![alt](/Projeto2/assets/E_1.png)

### Print com teste com input E_2 (Ele retorna o resultado feito pelo código e abaixo o resultado esperado, presente na pasta output).

![alt](/Projeto2/assets/E_2.png)

### Print com teste com input E_4 (Ele retorna o resultado feito pelo código e abaixo o resultado esperado, presente na pasta output).

![alt](/Projeto2/assets/E_4.png)

### Print com teste com input E_36 (Ele retorna o resultado feito pelo código e abaixo o resultado esperado, presente na pasta output).

![alt](/Projeto2/assets/E_36.png)

### Print com teste com input E_50 (Ele retorna o resultado e abaixo o resultado esperado, presente na pasta output).

![alt](/Projeto2/assets/E_50.png)
