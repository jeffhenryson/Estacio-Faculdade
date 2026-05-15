# Super Trunfo - Cadastro de Cartas de Cidades (Nível Aventureiro)
Calculando Densidade Populacional e PIB per Capita

Resumo do objetivo
- Ampliar o desafio do nível básico mantendo a leitura de duas cartas do jogo Super Trunfo, mas adicionando cálculos de densidade populacional e PIB per capita para cada cidade, com exibição formatada. Mantemos o requisito de não usar loops ou if/else.

O que você vai fazer
- Aprimore o programa em C que lê os dados das duas cartas (Estado, Código, Nome da Cidade, População, Área, PIB e Pontos Turísticos).
- Calcule a Densidade Populacional: população / área (valor float).
- Calcule o PIB per Capita: PIB (em bilhões de reais) convertido para reais dividido pela população (valor float).
- Exiba as informações cadastradas e os novos cálculos, com duas casas decimais para os valores flutuantes.

Formato de saída esperado (exemplo para cada carta):

Carta 1:
- Estado: A
- Código: A01
- Nome da Cidade: São Paulo
- População: 12325000
- Área: 1521.11 km2
- PIB: 699.28 bilhões de reais
- Número de Pontos Turísticos: 50
- Densidade Populacional: 8102.47 hab/km2
- PIB per Capita: 56724.32 reais

Carta 2:
- Estado: B
- Código: B02
- Nome da Cidade: Rio de Janeiro
- População: 6748000
- Área: 1200.25 km2
- PIB: 300.50 bilhões de reais
- Número de Pontos Turísticos: 30
- Densidade Populacional: 5622.24 hab/km2
- PIB per Capita: 44532.91 reais

Requisitos funcionais
- Ler corretamente os dados de duas cartas via entrada padrão (teclado).
- Armazenar os dados em variáveis apropriadas.
- Calcular e exibir a Densidade Populacional e o PIB per Capita para cada cidade, mantendo a exibição formatada.

Requisitos não funcionais
- Usabilidade: instruções claras para o usuário.
- Legibilidade: código bem comentado, nomes de variáveis significativos e indentação adequada.
- Corretude: funcionamento correto sem erros de compilação ou de execução.
- Eficiência: cálculos executados de forma simples e direta.

Simplificações para o nível aventureiro
- Continua lidando com apenas duas cartas, sem estruturas de repetição (for/while) nem decisões (if/else).
- O foco é praticar operações aritméticas simples e formatação de saída.

Observações de compilação e execução
- O arquivo de código fonte deve se chamar desafio_c_aventura.c.
- Compile com: gcc desafio_c_aventura.c -o desafio_aventura.exe
- Execute: desafio_aventura.exe

Notas sobre encoding
- Mantenha o código em ASCII para máxima compatibilidade de console. Caso use acentos, certifique-se de que o console está configurado para UTF-8.

Estrutura de arquivos do projeto (sugestão)
- desafio_c_aventura.c: código-fonte do desafio.
- ATIVIDADE_DESAFIO_AVENTUREIRO.md: especificação da atividade.
- Makefile: automatiza a compilação.
