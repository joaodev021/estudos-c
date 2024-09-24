
# Anotação: Variáveis e Expressões Aritméticas (Seção 1.2)

## 1. Variáveis

Em C, todas as variáveis precisam ser declaradas antes de serem usadas. Isso é feito indicando o **tipo** da variável (como `int` para inteiros ou `float` para números de ponto flutuante) seguido do nome da variável.

Exemplo:
```c
int fahr, celsius;
float lower, upper, step;
```

- **`int`**: Usado para números inteiros (sem parte fracionária). Exemplo: 5, -10.
- **`float`**: Usado para números com parte decimal (ponto flutuante). Exemplo: 5.7, -32.4.

## 2. Atribuições

Atribuímos valores às variáveis usando o operador de atribuição `=`. Por exemplo:
```c
lower = 0;    // atribui 0 à variável 'lower'
upper = 300;  // atribui 300 à variável 'upper'
step = 20;    // atribui 20 à variável 'step'
```

## 3. Operações Aritméticas

No programa de conversão de temperatura, a fórmula usada para converter Fahrenheit para Celsius foi:
```c
celsius = 5 * (fahr - 32) / 9;
```
Isso faz a conversão de Fahrenheit para Celsius, usando aritmética inteira.

**IMPORTANTE**: Quando usamos divisão entre inteiros, o resultado é truncado (parte decimal descartada). Então, se usamos `5 / 9`, o resultado seria `0` porque C considera essa divisão como operação entre inteiros. É por isso que a multiplicação é feita antes da divisão.

Para evitar esse truncamento, podemos usar ponto flutuante:
```c
celsius = (5.0 / 9.0) * (fahr - 32.0);
```

Agora, `5.0 / 9.0` será calculado com números de ponto flutuante, preservando a parte decimal.

## 4. Estruturas de Controle

A estrutura `while` foi usada para repetir o cálculo enquanto `fahr` estivesse dentro do limite superior:
```c
while (fahr <= upper) {
    // corpo do loop
}
```

- O **`while`** avalia uma condição. Se a condição for verdadeira (`fahr <= upper`), o bloco de código entre as chaves `{}` é executado. Quando a condição se torna falsa, o loop termina.
- Esse tipo de loop é útil para executar ações repetidamente até que uma condição específica seja satisfeita.

## 5. Impressão Formatada com `printf`

A função `printf` foi usada para formatar a saída de dados:
```c
printf("%d\t%d\n", fahr, celsius);
```
- `%d` indica que estamos imprimindo um número inteiro.
- `\t` é um caractere de tabulação, que coloca um espaço entre os valores.
- `\n` adiciona uma nova linha após imprimir os valores.

Podemos melhorar a formatação dos números, especificando a largura dos campos:
```c
printf("%3d %6d\n", fahr, celsius);
```
- `%3d` imprime um inteiro com pelo menos 3 caracteres de largura.
- `%6d` imprime o segundo número com 6 caracteres de largura.

## 6. Melhorando a Precisão

Para resultados mais precisos na conversão de temperaturas, foi sugerido o uso de números de ponto flutuante (float) em vez de inteiros, já que a aritmética de inteiros não preserva a parte decimal.

---

