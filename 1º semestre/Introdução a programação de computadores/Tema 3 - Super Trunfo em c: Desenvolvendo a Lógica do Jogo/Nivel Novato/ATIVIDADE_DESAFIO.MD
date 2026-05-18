
---

# Desafio: Nível Novato

## Comparando Cartas do Super Trunfo

Você já cadastrou as cartas com suas informações no desafio anterior. Agora, o próximo passo é implementar a **lógica de comparação** para determinar qual carta é a vencedora!

### 📋 O que você vai fazer

Você implementará a lógica para comparar duas cartas e determinar a vencedora com base em um **único atributo numérico**. Este desafio utiliza estruturas de decisão `if` e `if-else` para processar os dados cadastrados anteriormente.

---

### 🛠️ Requisitos Funcionais

1. **Entrada de Dados**:
* O programa deve receber os dados de **duas cartas**.
* Cada carta deve conter:
* Estado (`string`)
* Código da carta (`string`)
* Nome da cidade (`string`)
* População (`int`)
* Área (`float`)
* PIB (`float`)
* Número de pontos turísticos (`int`)




2. **Cálculos Necessários**:
* **Densidade Populacional**: $\text{População} / \text{Área}$
* **PIB per capita**: $\text{PIB} / \text{População}$


3. **Lógica de Comparação**:
* Escolha **um** atributo numérico no código (ex: População ou PIB) para servir de critério.
* **Regra de Vitória**:
* Para a maioria dos atributos: O **maior** valor vence.
* Para **Densidade Populacional**: O **menor** valor vence.




4. **Exibição do Resultado**:
* O programa deve informar o atributo usado, os valores de cada carta e declarar a vencedora.



> **Exemplo de Saída:**
> Comparação de cartas (Atributo: População):
> * Carta 1 - São Paulo (SP): 12.300.000
> * Carta 2 - Rio de Janeiro (RJ): 6.000.000
> 
> 
> **Resultado: Carta 1 (São Paulo) venceu!**

---

### ⚙️ Requisitos Não Funcionais

* **Usabilidade**: Saída clara e fácil de entender no console.
* **Legibilidade**: Código organizado com nomes de variáveis descritivos (ex: `populacaoCarta1`, `areaCarta2`).
* **Documentação**: Uso de comentários para explicar o propósito de cada bloco de código.

---

### 💡 Simplificações (Nível Básico)

* Compare apenas **duas cartas**.
* A escolha do atributo de comparação é **fixa no código** (não precisa de menu para o usuário escolher agora).
* Foco total no uso correto de `if` e `if-else`.

---