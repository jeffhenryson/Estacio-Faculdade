# Super Trunfo - Cadastro de Cartas de Cidades
Desafio Nível Novato - Estácio

- Tema: Cadastro de cartas para o jogo de Super Trunfo
- Descrição: Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo.

## Dados de cada carta
- Estado: uma letra de 'A' a 'H' (representando um dos oito estados).
- Código da Carta: a letra do estado seguida de dois dígitos (ex.: A01, B03).
- Nome da Cidade: string.
- População: inteiro.
- Área (km²): float.
- PIB: float.
- Número de Pontos Turísticos: inteiro.

## Saída esperada
- Após inserir os dados de cada carta, o programa deve exibir as informações cadastradas de forma organizada.

Exemplo de formatação para cada carta:

Carta 1:
- Estado: A
- Código: A01
- Nome da Cidade: São Paulo
- População: 12325000
- Área: 1521.11 km²
- PIB: 699.28 bilhões de reais
- Número de Pontos Turísticos: 50

Carta 2:
- Estado: B
- Código: B02
- Nome da Cidade: Rio de Janeiro
- População: 6748000
- Área: 1200.25 km²
- PIB: 300.50 bilhões de reais
- Número de Pontos Turísticos: 30

## Requisitos funcionais
- Ler corretamente os dados de duas cartas via entrada padrão (teclado).
- Armazenar os dados em variáveis apropriadas.
- Exibir os dados de cada carta na tela, formatados conforme o exemplo.

## Requisitos não funcionais
- Usabilidade: instruções claras para o usuário.
- Legibilidade: código bem comentado, nomes de variáveis significativos e indentação correta.
- Corretude: sem erros de compilação ou execução.

## Simplificações para o desafio
- Implementar apenas o cadastro e a exibição de duas cartas.
- Não utilizar estruturas de repetição (for/while) nem estruturas de decisão (if/else).
- O programa deve ser uma sequência simples de instruções, cobrindo apenas leitura, armazenamento e exibição.

## Observações de compilação e execução
- O arquivo de código fonte típico deste desafio pode se chamar desafio.c.
- Para compilar (em Windows com GCC, por exemplo):
- gcc desafio.c -o desafio.exe
- Para executar: desafio.exe

> Dicas: use nomes de variáveis claros (por ex., estado, codigo, nomeCidade, populacao, areaKm2, pib, pontosTuristicos) e comente cada leitura e cada impressão para manter a legibilidade.

## Estrutura sugerida (sem exigir estruturas de dados complexas)
- Declaração de variáveis simples para as duas cartas.
- Leituras sequenciais (Carta 1, depois Carta 2).
- Impressões sequenciais para cada carta.

---

Este arquivo descreve o desafio de forma objetiva para facilitar a consulta durante o desenvolvimento.