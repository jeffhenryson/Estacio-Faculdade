
---

# Desafio: Nível Mestre

## Implementando Comparações Avançadas com Atributos Múltiplos

Este é o desafio final do Super Trunfo! É hora de integrar todo o seu conhecimento em lógica de programação C, unindo estruturas de decisão complexas, cálculos de soma e uma interface de usuário mais refinada.

### 🏆 O que você vai fazer

Você elevará o jogo para um nível estratégico. O jogador agora escolherá **dois atributos** para a disputa. O sistema deverá comparar cada um individualmente e, por fim, realizar uma **soma dos atributos** para determinar o vencedor final. Você também é encorajado a usar o **operador ternário** para deixar o código mais elegante.

---

### 🛠️ Requisitos Funcionais

1. **Escolha de Atributos Duplos**:
* O jogador deve selecionar dois atributos numéricos diferentes por meio de menus.
* **Regra Crítica**: O sistema deve impedir que o mesmo atributo seja selecionado duas vezes.


2. **Menus Dinâmicos (`switch`)**:
* Utilize `switch` para gerenciar as escolhas.
* Após a primeira escolha, o menu deve (idealmente) informar que aquele atributo já foi selecionado.


3. **Lógica de Comparação Múltipla**:
* Compare os dois atributos individualmente.
* Lembre-se: **Densidade Demográfica** (menor valor vence) vs. **Outros Atributos** (maior valor vence).


4. **Cálculo da Soma e Resultado Final**:
* O programa deve somar os valores dos dois atributos escolhidos para cada carta.
* A carta com a **maior soma total** é a vencedora da rodada.
* **Tratamento de Empate**: Se as somas forem iguais, exiba "Empate!".


5. **Exibição Detalhada**:
* Nomes dos países/cidades.
* Valores individuais de cada atributo escolhido.
* O valor da soma total de cada carta.
* Anúncio do grande vencedor.



---

### ⚙️ Requisitos Não Funcionais

* **Confiabilidade**: Use o `default` no `switch` para tratar entradas inválidas de forma amigável.
* **Elegância de Código**: Implemente o **operador ternário** `(condição ? verdadeiro : falso)` em pontos estratégicos para simplificar atribuições.
* **Manutenibilidade**: Código bem indentado e documentado, essencial para projetos de maior escala como este.

---

### 💡 Dicas para o Nível Mestre

* **Variáveis de Soma**: Como você está somando tipos diferentes (ex: `int` de população com `float` de PIB), certifique-se de que a variável da soma seja um `float` ou `double` para não perder precisão.
* **Lógica da Densidade na Soma**: Pense em como somar a densidade de forma justa, já que nela "menos é mais". Uma técnica comum em jogos é inverter o valor ou usar um peso, mas para este desafio, a soma simples dos valores nominais já cumpre o requisito.
* **Exemplo de Operador Ternário**:
`vencedor = (soma1 > soma2) ? 1 : 2;`

---