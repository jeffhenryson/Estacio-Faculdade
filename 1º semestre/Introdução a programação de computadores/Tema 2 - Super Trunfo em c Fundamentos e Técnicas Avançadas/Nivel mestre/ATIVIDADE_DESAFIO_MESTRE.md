# Super Trunfo - Batalha de Cartas (Nível Mestre)
Batalha de Cartas no Super Trunfo

Prepare-se para o desafio final! Este nível avança a lógica de comparação entre duas cartas, adicionando o conceito de Super Poder e a taxa de vitória por atributo.

O que você vai fazer
- Ler os dados de duas cartas (Estado, Código, Nome da Cidade, População, Área, PIB e Pontos Turísticos) conforme os níveis anteriores. A população deve ser armazenada como unsigned long int.
- Calcular Densidade Populacional (população / área) e PIB per Capita ((PIB em bilhões de reais) * 1e9 / população).
- Calcular o Super Poder: soma de todos os atributos numéricos (população, área, PIB, pontos turísticos, PIB per capita e o inverso da densidade populacional).
- Comparar as cartas atributo por atributo (exceto estado, código e nome): população, área, PIB, pontos turísticos, densidade populacional, PIB per Capita e Super Poder.
- Exibir os resultados da comparação para cada atributo, indicando qual carta venceu (1 para Carta 1, 0 para Carta 2).

Formato de saída esperado (exemplo):

Comparação de Cartas:

População: Carta 1 venceu (1)

Área: Carta 1 venceu (1)

PIB: Carta 1 venceu (1)

Pontos Turísticos: Carta 1 venceu (1)

Densidade Populacional: Carta 2 venceu (0)

PIB per Capita: Carta 1 venceu (1)

Super Poder: Carta 1 venceu (1)

Requisitos funcionais
- Manter as funcionalidades do nível intermediário (leitura, cálculos e exibição) e adicionar as vitórias por atributo.
- Garantir que o matrix de comparação siga as regras: densidade (menor vence), demais atributos (maior vence).

Requisitos não funcionais
- Manter usabilidade, legibilidade e corretude com foco em eficiência.

Observações
- Este nível utiliza apenas duas cartas, sem estruturas de repetição (for/while) ou estruturas de decisão (if/else).
- O código deve orientar o usuário com mensagens claras para entrada de dados.

Estrutura de arquivos sugerida
- desafio_c_mestre.c: código-fonte do desafio Mestre.
- ATIVIDADE_DESAFIO_MESTRE.md: especificação detalhada da atividade.
- Makefile: para facilitar a compilação (opcional).