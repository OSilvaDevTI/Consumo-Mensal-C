# ⚡ Análise de Consumo de Eletricidade Residencial
Este projeto em C foi desenvolvido para analisar o consumo mensal de eletricidade de um conjunto de residências, a fim de fornecer insights sobre a média de consumo, e identificar os valores extremos (maior e menor) e o número de casas que consomem acima da média.

O projeto foi proposto como um exercício sobre a manipulação de arrays e a criação de funções em linguagem C.

## 📋 Funcionalidades
O programa executa as seguintes tarefas:

#### Leitura da Quantidade de Casas ($\mathbf{N}$): Solicita o número de residências a serem analisadas (máximo de 50).
#### Leitura e Validação dos Dados: Lê o consumo em kWh para cada casa, garantindo que o valor seja positivo (maior que zero).
#### Cálculo da Média: Determina o consumo médio de todas as residências.
#### Identificação de Extremos: Encontra o maior e o menor consumo registrados.
#### Contagem Acima da Média: Conta quantas casas tiveram um consumo superior à média calculada.
#### Exibição dos Resultados: Apresenta todos os resultados de forma clara no console.

# 💻 Como Compilar e Executar
Este projeto é um programa de console escrito em C.

#### Ambiente de Desenvolvimento: O código foi desenvolvido e testado no Dev-C++ 5.1.1 (que utiliza o compilador MinGW/GCC).
#### Compilação:
##### No Dev-C++, abra o arquivo .cpp
##### Vá em Executar > Compilar e Executar (ou use a tecla F11).
##### O Dev-C++ cuidará automaticamente da compilação e execução.

# 📝 Notas do Desenvolvedor
#### A manipulação dos índices dos arrays no código (iniciando em 1 ao invés de 0 dentro dos laços for) é uma particularidade da implementação, mas o código funciona corretamente para o propósito do exercício.
#### variável media foi definida como global para ser acessível após o cálculo e utilizada na função acimaDaMedia.
#### A biblioteca <conio.c> foi incluída no projeto original. Embora seja uma inclusão não padrão para C, mantive a referência.

# 📌 Sobre a Entrega
Este projeto foi desenvolvido como parte de um exercício acadêmico. A entrega final exigia a submissão de um arquivo DOC ou PDF contendo a resolução manuscrita do problema, além do código-fonte para estudo.
