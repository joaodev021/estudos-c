
#### 1.3 A instrução `for`

- **Estrutura Básica:**
  O loop `for` é uma construção que permite iterar um bloco de código um número definido de vezes. A sintaxe é a seguinte:
  ```c
  for (inicialização; condição; incremento) {
      // corpo do loop
  }
  ```

- **Componentes do `for`:**
  1. **Inicialização:** Executada uma vez antes do início do loop. Exemplo: `fahr = 0;`
  2. **Condição:** Avaliada antes de cada iteração. Se for verdadeira, o corpo do loop é executado. Exemplo: `fahr <= 300;`
  3. **Incremento:** Executado após cada iteração do corpo do loop. Exemplo: `fahr = fahr + 20;`

- **Exemplo de Conversão de Temperatura:**
  O código a seguir imprime a tabela de conversão de Fahrenheit para Celsius:
  ```c
  #include <stdio.h>

  /* imprime a tabela Fahrenheit-Celsius */
  main() {
      int fahr;
      for (fahr = 0; fahr <= 300; fahr = fahr + 20)
          printf("%3d %6.1f, fahr, (5.0/9.0)*(fahr-32));
  }
  ```
  - **Simplicidade:** O uso do `for` elimina a necessidade de várias variáveis, já que os limites e o passo estão integrados na própria instrução.
  - **Expressões Diretas:** O cálculo da temperatura Celsius é feito diretamente no argumento do `printf`, mostrando a flexibilidade de expressões.

- **Escolha entre `while` e `for`:**
  A escolha entre `while` e `for` depende do contexto. O `for` é mais apropriado quando a inicialização e o incremento estão diretamente relacionados e são simples, já que permite uma leitura mais clara do controle do loop.

#### Exercício 1-5
**Modificação:** Modificar o programa para imprimir a tabela em ordem inversa, de 300 graus a 0. 

- Para isso, vou ajustar a inicialização e a condição do loop `for` para que `fahr` comece em 300 e diminua até 0.

---
