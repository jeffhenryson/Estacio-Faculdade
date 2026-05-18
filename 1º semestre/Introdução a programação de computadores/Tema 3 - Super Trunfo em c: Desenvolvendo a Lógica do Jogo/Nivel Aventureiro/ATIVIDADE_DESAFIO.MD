
---

# Desafio: Nível Aventureiro

## Interatividade no Super Trunfo

Neste nível, o projeto ganha mais dinamismo. Você deixará de ter um atributo fixo no código e passará a permitir que o **usuário escolha** o que quer comparar, além de tratar situações de empate.

### 🎮 O que você vai fazer

O foco aqui é a criação de um **menu interativo**. Você utilizará a estrutura `switch` para capturar a escolha do jogador e estruturas de decisão (podendo incluir as aninhadas) para definir o vencedor com base em regras que mudam dependendo do atributo (como a densidade demográfica).

---

### 🛠️ Requisitos Funcionais

1. **Menu Interativo (`switch`)**:
* Exibir um menu no terminal para que o jogador escolha o atributo de comparação.
* Exemplo: `1. População`, `2. Área`, `3. PIB`, etc.


2. **Atributos para Comparação**:
* **População** (`int`)
* **Área** (`float`)
* **PIB** (`float`)
* **Pontos Turísticos** (`int`)
* **Densidade Demográfica** (`float`)


3. **Lógica e Regras de Negócio**:
* **Regra Geral**: Vence o **maior** valor.
* **Regra Especial (Densidade)**: Vence o **menor** valor.
* **Empate**: Se os valores forem iguais, o programa deve exibir "Empate!".


4. **Exibição do Resultado**:
* Nome dos dois países/cidades.
* Atributo utilizado e os respectivos valores de cada carta.
* Anúncio claro da carta vencedora ou do empate.



---

### ⚙️ Requisitos Não Funcionais

* **Usabilidade**: O menu deve ser intuitivo. Mensagens de erro para opções inválidas (usando o `default` do switch) são recomendadas.
* **Manutenibilidade**: Código limpo e bem comentado, facilitando a leitura de como os blocos `if-else` interagem com o `switch`.
* **Performance**: Resposta imediata após a entrada do usuário.

---

### 💡 Dicas para o Nível Intermediário

* **Aproveitamento**: Use o código de cadastro que você já criou. Não precisa refazer o `scanf` de todas as variáveis se elas já estiverem prontas.
* **Tratamento de Dados**: No `switch`, lembre-se que cada `case` cuidará de um tipo de comparação.
* **Lógica Aninhada**: Você pode usar `if` dentro dos `cases` para verificar quem ganhou ou se houve empate.

---